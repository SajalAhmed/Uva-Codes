#include <bits/stdc++.h>
#define MAX 10000000
using namespace std;
typedef long long int ll;
vector<ll> v, w;
bool prime[MAX];
void sieve(){
    memset(prime, true, sizeof(prime)); 
    for(ll i = 2; i < MAX; i++) { 
        if(prime[i] == true){ 
            for(ll j = i*i; j < MAX; j += i){ 
                prime[j] = false; 
            }
            w.push_back(i);
        } 
    }
    w.push_back(w.size()); 
    prime[0] = prime[1] = false;
}  
void divisors(ll n) {
    for (ll i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0){ 
            v.push_back(i);
            if(n/i != i) 
            v.push_back(n / i);
        } 
    }
}
bool is_prime(ll n){
 	if(n < MAX) return prime[n];
 	int temp = sqrt(n);
 	for(ll i = 0; i < w.back() && w[i] <= temp; i++){
 	 	if(n % w[i] == 0){
 	 		return false;
 	 	}	
 	}
 	return true;
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, temp, cnt;
	sieve();
	while(scanf("%lld", &n) ,(n|0)){
		if(n < 0) n *= -1;
	 	divisors(n);
	 	cnt = temp = 0;
	 	for(int i = 0; i < v.size(); i++){
	 		if(is_prime(v[i])){
				if(v[i] > temp) temp = v[i];
	 		   	cnt++;
		 	}
	 	}
	 	printf("%lld\n", cnt > 1 ? temp : -1);
	 	v.clear();
	}
	return 0;
}