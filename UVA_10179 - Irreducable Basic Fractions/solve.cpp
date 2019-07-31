#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll eulerTotient(ll n) {
    ll temp = n;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0){
            while(n % i == 0){
            	n /= i;
            }
            temp -= (temp / i);
        }
    }
    if(n > 1) temp -= (temp / n);
    return temp;
}
int main(){
 	ll n;
 	while(scanf("%lld", &n), (n|0)){
 	 	printf("%lld\n", eulerTotient(n));
 	}
 	return 0;
}