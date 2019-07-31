#include <bits/stdc++.h>
#define MAX 100000
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
ll primeDivisors(ll n){
  ll ans = 1;
  map<ll, int> mp;
  map<ll, int>::iterator it;
  for(int j = 0; j < v.size() && v[j] * v[j] <= n; j++){
    while(n % v[j] == 0){
         n /= v[j];
         mp[v[j]]++;
      }
    }
    if(n > 1){
     	mp[n]++;
    }
    for(it = mp.begin(); it!= mp.end(); it++){
     	ans *= ((it->second) + 1);
    }
    return ans;
}
int main(){
	sieve();
	ll a, b, t, temp;
	ll arr[2] = {0, 0};
	scanf("%lld", &t);
	while(t--){
	 	scanf("%lld%lld", &a,&b);
	 	for(int i = a; i <= b; i++){
	 	 	temp = primeDivisors(i);
	 	 	if(arr[0] < temp){
	 	 	 	arr[1] = i;
	 	 	 	arr[0] = temp;
	 	 	}
	 	}
	 	printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", a, b, arr[1], arr[0]);
	 	arr[0] = arr[1] = 0;
	}
 	return 0;
}