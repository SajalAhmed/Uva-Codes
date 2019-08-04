#include <bits/stdc++.h>
#define MAX 65555
using namespace std;
typedef long long int ll;
vector<ll> v;
bool prime[MAX];
void sieve(){
    memset(prime, true, sizeof(prime)); 
    for(ll i = 2; i < MAX; i++) { 
        if(prime[i] == true){ 
            for(ll j = i*i; j < MAX; j += i){ 
                prime[j] = false; 
            }
            v.push_back(i); 
        } 
    } 
}
void solve(ll n){
	ll ans = 1;
 	map<ll, int> mp;
 	map<ll, int>::iterator it;
  	for(int j = 0; j < v.size() && v[j] * v[j] <= n; j++){
    	while(n % v[j] == 0){
      		n /= v[j];
      		mp[v[j]]++;
    	}
  	}
  	if(n > 1) mp[n]++;
	for(it = mp.begin(); it!= mp.end(); it++){
    	ans *= ((it->second) + 1);
  	}
  	if(ans % 2) printf("yes\n");
  	else printf("no\n");
}
int main(){
	sieve();
	ll a, ans;
	while(scanf("%lld", &a), (a|0)){
		solve(a);
	}
 	return 0;
}