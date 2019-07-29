#include <bits/stdc++.h>
#define MAX 9999
using namespace std;
typedef long long int ll;
vector<ll> v, p;
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

void primeDivisors(ll a, ll c){
    ll b1, b2, ans = 1;
	for(int j = 0; j < v.size() && v[j] * v[j] <= c; j++){
		b1 = b2 = 1;
    	while(c % v[j] == 0){
         	c /= v[j];
         	b1 *= v[j];
		}
		while(a % v[j] == 0){
			a /= v[j];
			b2 *= v[j];
		}
     	if(b1 != b2) ans *= max(b1, b2);
	}
	if(c > 1 && c != a) ans *= c;
	if(a > 1 && c != a) ans *= a;
	printf("%lld\n", ans);
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	sieve();
	ll n, a, c;
	scanf("%lld", &n);
	while(n--){
		scanf("%lld %lld", &a, &c);
		if(c % a) printf("NO SOLUTION\n");
		else primeDivisors(a, c);
	}
	return 0;
}