#include <bits/stdc++.h>
using namespace std;
int main(){
 	int t, v, cnt = 1;
 	int arr[11];
 	scanf("%d", &t);
 	while(t--){
 	 	int v;
 	 	scanf("%d", &v);
 	 	for(int i = 0; i < v; i++){
 	 	 	scanf("%d", &arr[i]);
 	 	}
 	 	printf("Case %d: %d\n", cnt++, arr[v / 2]);
 	}
}