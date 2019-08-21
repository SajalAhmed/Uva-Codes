#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fn(ll a, ll cnt){
	if(a == 1 && cnt > 0) return cnt;
	if(a%2){
	 	return fn(a * 3 + 1, cnt + 1);
	}
	else{
	 	return fn(a / 2, cnt + 1);
	}
}
int main(){
	ll a, b, temp, a1, a2;
	while(scanf("%lld%lld", &a, &b), (a|b)){
		temp = b;
		b = max(a, b);
		a = min(a, temp);
	 	temp = a1 = a2 = 0;
	 	for(ll i = a; i <= b; i++){
	 	 	temp = fn(i, 0);
	 	 	if(temp > a2) a1 = i, a2 = temp;
	 	}
	 	printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a, b, a1, a2); 
	}
	return 0;
}