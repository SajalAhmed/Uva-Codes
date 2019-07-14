#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll h(int n){
 	ll res = 0;
 	int temp = 0, cnt = 0;
 	for(int i = 1; i <= sqrt(n); i++){
 	   temp = (n / i) - (n / (i+1));
 	   cnt += temp;
 	   res += (temp * i);
 	}
 	for(int i = 1; i <= (n - cnt); i++){
 	 	res += (n / i);
 	}
 	return res;
}
int main(){
 	int t, n;
 	scanf("%d", &t);
 	while(t--){
 	 	scanf("%d", &n);
 	 	printf("%lld\n", h(n));
 	}
 	return 0;
}