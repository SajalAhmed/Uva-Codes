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
int primeDivisors(ll n){
  map<ll, int> mp;
  for(int j = 0; j < v.size() && v[j] * v[j] <= n; j++){
    while(n % v[j] == 0){
      n /= v[j];
      mp[v[j]]++;
    }
  }
  if(n > 1) mp[n]++;
  return mp.size();
}
int main(){
 	ll n;
 	sieve();
 	while(scanf("%lld", &n), (n|0)){
 	 	printf("%lld : %d\n",n, primeDivisors(n));
 	}
}