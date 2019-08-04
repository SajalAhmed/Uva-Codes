#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b, ll & x, ll & y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    ll x1, y1;
    ll d = gcd(b%a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return d;
}
int main(){
	ll a, b, g, x, y;
	while(scanf("%lld%lld", &a, &b) != EOF){
		if(a == b){
			x = 0;
			y = 1;
			g = a;
		}
		else g = gcd(a, b, x, y);
		printf("%lld %lld %lld\n", x, y, g); 	
	}
	return 0;
}