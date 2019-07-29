#include <bits/stdc++.h>
#define MAX 1000000
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
ll countDivisors(ll a, ll b){
 	ll temp = 0;
 	while(a){
 	 	a /= b;
 	 	temp += a;
 	}
 	return temp;
}
bool primeDivisors(ll a, ll b){
    ll t1, t2;
	for(int j = 0; j < v.size() && v[j] * v[j] <= b; j++){
	    t1 = t2 = 0;
		if(b % v[j] == 0){
    		while(b % v[j] == 0){
         		b /= v[j];
         		t1++;
			}
			t2 = countDivisors(a, v[j]);
			if(t2 < t1) return false;
		}
	}
	if(b > 1 && !countDivisors(a, b)){
	   return false;
	}
	return true;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	sieve();
	ll a, b;
	while(scanf("%lld %lld", &a, &b) != EOF){
		if(primeDivisors(a, b)){
		 	printf("%lld divides %lld!\n", b, a);
		}
		else{
		 	printf("%lld does not divide %lld!\n", b, a);
		}
	}
	return 0;
}