#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
 	int arr[1001];
 	int n, position, car;
 	bool flag;
 	while(scanf("%d", &n)){
 		memset(arr, 0, sizeof arr);
 		flag = true;
 	 	if(n==0) break;
 	 	for(int i = 1;i <= n;i++){
 	 	 	scanf("%d%d", &car, &position);
 	 	 	if((i + position) < 1 || (i + position) > n) 
 	 	 		flag = false;
 	 	 	else{
 	 	 		if(arr[i+position] > 0) flag = false;
 	 	 	 	else arr[i+position] = car;
 	 		}
 	 	}   
 	 	if(flag){
 	 	 	for(int i = 1;i <= n;i++){
 	 	 	 	if(i == 1) printf("%d", arr[i]);
 	 	 	 	else printf(" %d", arr[i]);
 	 	 	}
 	 	}
 	 	else printf("-1");
 	 	printf("\n");

 	}
}