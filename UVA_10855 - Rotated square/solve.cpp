#include <bits/stdc++.h>
using namespace std;
char n1[101][101];
char str[101][101];

void rotate_90deg(int n){
  for(int i = 0; i < n / 2 ; i++){
      for(int j = i; j < n - (i + 1); j++){
        char temp = str[i][j];
        str[i][j] = str[n-1-j][i];
        str[n-1-j][i] = str[n-1-i][n-1-j];
        str[n-1-i][n-1-j] = str[j][n-1-i]; 
        str[j][n-1-i] = temp;
      }                          
  }
}
int check(int n, int m){
	int sum = 0, flag = 0;
 	for(int i = 0; i <= n - m; i++){
 	 	for(int j = 0; j <= n - m; j++){
 	 	 	for(int l = 0; l < m; l++){
 	 	 	 	for(int p = 0; p < m; p++){
 	 	 	 	 	if(n1[i + l][j + p] == str[l][p]){
 	 	 	 	 	 	sum++;
 	 	 	 	 	}
 	 	 	 	 	else goto outerloop;
 	 	 	 	}
 	 	 	}
 	 	 	outerloop:
 	 	 	if(sum == m * m) flag++;
 	 	 	sum = 0;
 	 	}
 	}
 	return flag;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
    int n, m;
 	while(scanf("%d %d", &n, &m), (n|m)){ 

 	 	for(int i = 0; i < n; i++){
 	 	 	scanf("%s", n1[i]);
 	 	}
 	 	for(int i = 0; i < m; i++){
 	 	 	scanf("%s", str[i]);
 	 	}
 	 	for(int i = 0; i < 4; i++){   
 	 		if(i > 0) printf(" ");
 	 		printf("%d", check(n, m));
 	 		rotate_90deg(m);
 	 	}
 	 	printf("\n");
 	}
 return 0;
}