#include <bits/stdc++.h>
#define MAX 999
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
ll sumOfDivisors(ll n){
    ll sum = 0, ans = 1, t = 1;
    for(int j = 0; j < v.size() && v[j] * v[j] <= n; j++){
        while(n % v[j] == 0){
            n /= v[j];
            t *= v[j];
            sum += t;
        }
        if(t > 1){
            ans *= (sum + 1);
            sum = 0;
            t = 1;
        }
    }
    if(n > 1) ans *= (n + 1);
    return ans;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	sieve();
	ll a, cnt = 1, temp;
	bool flag = false;
	while(scanf("%lld", &a), (a|0)){
		for(ll i = a - 1; i > 1; i--){
		 	temp = sumOfDivisors(i);
		 	if(temp == a){
		 		temp = i;
		 		flag = true;
		 	 	break;
		 	}
		}
		if(a == 1){
		 	temp = a;
		 	flag = true;
		}
		if(flag) printf("Case %lld: %lld\n", cnt++, temp);
		else printf("Case %lld: -1\n", cnt++);
		flag = false;
	}  
 	return 0;
}