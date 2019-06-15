#include <bits/stdc++.h>
using namespace std;
int arr[11][11];
void print(int n){
 	for(int i = 0; i < n; i++){
 	 	for(int j = 0; j < n; j++){
 	 	 	printf("%d", arr[i][j]);
 	 	}
 	 	printf("\n");
 	}
 	printf("\n");
}
void row_ab(int a, int b, int n){
 	  for(int i = 0; i < n; i++){
 	        swap(arr[a - 1][i], arr[b - 1][i]);
      }        
}
void col_ab(int a, int b, int n){
    for(int i = 0; i < n; i++){
     	swap(arr[i][a - 1], arr[i][b - 1]);
    }
}
void transpose(int n){
     for(int i = 0; i < n; i++){
      	for(int j = i; j < n; j++){
      	 	swap(arr[j][i], arr[i][j]);
      	}
     }
}
void inc(int n){
	for(int i = 0; i < n; i++){
	 	for(int j = 0; j < n; j++){
	 	 	arr[i][j]++;
	 	 	arr[i][j] %= 10;
	 	}
 	}
}
void dec(int n){
 	for(int i = 0; i < n; i++){
 	 	for(int j = 0; j < n; j++){
 	 	 	arr[i][j]--;
 	 	 	if(arr[i][j] < 0) arr[i][j] = 9;
 	 	}
 	}
}
int main(){
    int t, n, m, a, b, cnt = 1;
    char str[10];
    scanf("%d", &t);
    while(t--){
    	scanf("%d", &n);
     	for(int i = 0; i < n; i++){
     	 	scanf("%s", str);
     	 	for(int j = 0; j < n; j++)
     	 	 	arr[i][j] = str[j] - '0';
     	}
     	scanf("%d", &m);
     	for(int i = 0; i < m; i++){
     	 	scanf("%s", str);
     	 	if(str[0] == 't') transpose(n);
     	 	else if(str[0] == 'i') inc(n);
     	 	else if(str[0] == 'd') dec(n);
     	 	else if(str[0] == 'r'){
     	 	 	scanf("%d %d", &a, &b);
     	 	 	row_ab(a, b, n);
     	 	}
     	 	else if(str[0] == 'c'){
     	 	    scanf("%d %d", &a, &b);
     	 	    col_ab(a, b, n);
     	 	}
     	}
     	printf("Case #%d\n", cnt++);
     	print(n);
    }
return 0;
}