#include <bits/stdc++.h>
#define MAX 10001000
using namespace std;
typedef long long int ll;
vector<ll> w;
bool prime[MAX];
const int LEN = 664640;
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
}  

int main(){
	sieve();
	ll n, ans;
	int cnt, temp;
	while(scanf("%lld", &n) ,(n|0)){
		if(n < 0) n *= -1;
		cnt = ans = 0;
		temp = sqrt(n);
	 	for(ll i = 0; i < LEN && n > 1; i++){
	 		if(!(n % w[i])) cnt++;
	 	 	while(n % w[i] == 0){
	 	 	 	n /=  w[i];
	 	 	 	ans = w[i];
	 		}
	 	}
		if(n > 1){	
	 		cnt++; 
	 		ans = n;
	 	}
	 	printf("%lld\n", cnt > 1 ? ans : -1);
	}
	return 0;
}