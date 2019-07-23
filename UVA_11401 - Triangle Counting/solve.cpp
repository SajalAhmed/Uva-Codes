#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;
typedef long long int ll;
ll arr[MAX] = {0, 0, 0};
int main(){
	int n;
	for(ll i = 3; i < MAX; i++){
		n = ((i - 3) / 2) + 1;
		arr[i] = arr[i - 1] + (n * (!(i % 2) + (i - 3))) / 2;
	}
 	while(scanf("%d", &n) != EOF){
 	   if(n < 3) break;
 	   printf("%lld\n", arr[n]);
 	}
	return 0;
}