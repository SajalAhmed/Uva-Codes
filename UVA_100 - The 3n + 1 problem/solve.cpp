#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fn(ll a, ll cnt){
	if(a == 1) return cnt;
	else if(a%2){
	 	return fn(a * 3 + 1, cnt + 1);
	}
	else{
	 	return fn(a / 2, cnt + 1);
	}
}
int main(){
	ll a, b, temp, ans;
	while(scanf("%lld%lld", &a, &b) != EOF){
	 	temp = ans = 0;
	 	for(ll i = min(a, b); i <= max(a, b); i++){
	 	 	temp = fn(i, 1);
	 	 	if(temp > ans) ans = temp;
	 	}
	 	printf("%lld %lld %lld\n",a, b, ans); 
	}
	return 0;
}