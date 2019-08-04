#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll a, b, c, cnt = 1, temp;
	while(scanf("%lld%lld", &a, &b)){
		if(a < 0 && b < 0) break;
		c = 0;
		temp = a;
		while(1){
			c++;
			if(a == 1) break;
			if(a % 2 == 0) a = a / 2;
			else a = a * 3 + 1;
			if(a > b) break;
		}
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cnt++, temp, b, c);
	}
	

	return 0;
}