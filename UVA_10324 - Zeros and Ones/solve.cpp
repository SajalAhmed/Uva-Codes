#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
 	char str[1000000];
 	int a, b, n, temp, cnt = 1;
 	while(scanf("%s", str) != EOF){
 	 	scanf("%d", &n);
 	 	printf("Case %d:\n", cnt++);
 	 	for(int i=0;i<n;i++){
 	 	 	scanf("%d%d", &a, &b);
 	 	 	temp = max(a, b);
 	 	 	a = min(a,b );
 	 	 	b= temp;
 	 	 	temp = 1;
 	 	 	for(int j = a;j < b;j++){
 	 	 	 	if(str[j] != str[j+1]){
 	 	 	 		 temp  = 0;
 	 	 	 		 break;
 	 	 	 	 }
 	 	 	}
 	 	 	if(temp == 1)
 	 	 		printf("Yes\n");
 	 	 	else 
 	 	 		printf("No\n");

 	 	}
 	}     

}