#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v;
int lcm(ll a, ll b){ return a * (b / __gcd(a, b)); }
void divisors(ll n) { 
    ll temp = sqrt(n);
    for (ll i = 1; i <= temp; i++){ 
        if(n % i == 0){
        	v.push_back(i);
            if (n / i != i) v.push_back(n / i);
        } 
    }  
} 
int main(){
	ll n, sum, temp;
	while(scanf("%lld", &n), (n|0)){
		sum = 0;
		divisors(n);
	    temp = v.size();
	    sort(v.begin(), v.end());
	    for(int i = 1; i < temp - 1; i++){
	    	for(int j = i + 1; j < temp - 1; j++){
	    	 	if(lcm(v[i], v[j]) == n) sum++;
	     	}
	    }
	    printf("%lld %lld\n", n, sum + temp);
	    v.clear();
	}     
return 0;
}