#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;
typedef long long int ll; 
bool prime[MAX];
vector<ll> v;
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
	v.push_back(v.size());
	prime[0] = prime[1] = false; 
} 
bool is_prime(ll n){
 	if(n < MAX) return prime[n];
 	int temp = sqrt(n);
 	for(ll i = 0; i < v.back() && v[i] <= temp; i++){
 	 	if(n % v[i] == 0){
 	 		return false;
 	 	}	
 	}
 	return true;
}
int main(){
	ll n, m, prime;
	ll arr[2][2];
	bool flag;
	sieve(); 
	while(scanf("%lld%lld", &n, &m) != EOF){
		arr[0][0] = arr[0][1] = arr[1][0] = arr[1][1] = 0;
		for(ll i = n; i <= m; i++){
			 flag = is_prime(i);
		 	 if(!arr[0][0] && flag){
		 	  	arr[0][0] = i;
		 	  	arr[1][0] = i;
		 	 }
		 	 else if(!arr[0][1] && flag){
		 	  	arr[0][1] = i;
		 	  	arr[1][1] = i;
		 	 }
		 	 else if(flag && arr[0][0] && arr[0][1]){
		 	  	  if(i - prime < arr[0][1] - arr[0][0]){
		 	  	   	arr[0][0] = prime;
		 	  	   	arr[0][1] = i;
		 	  	  }
		 	  	  if(i - prime > arr[1][1] - arr[1][0]){
		 	  	   	arr[1][0] = prime;
		 	  	   	arr[1][1] = i;
		 	  	  }
		 	 }
		 	 if(flag) prime = i;
		}
		if(arr[0][0] && arr[0][1]) {
		 	printf("%lld,%lld are closest, %lld,%lld are most distant.\n", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
		}
		else printf("There are no adjacent primes.\n");
    }
} 
