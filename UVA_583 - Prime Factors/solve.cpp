#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void primeFactors(ll n){    
	vector<ll> v;
    while (n % 2 == 0){   
    	v.push_back(2);
        n = n/2;  
    }  
    for (ll i = 3; i <= sqrt(n); i += 2)  {  
        while (n % i == 0){
            n = n/i;  
            v.push_back(i);
        }  
    }  
    if (n > 2) v.push_back(n);  
    for(int i = 0; i < v.size(); i++){
     	 if(i == 0) printf("%lld", v[i]);
     	 else printf(" x %lld", v[i]);
    }
    printf("\n");
    v.clear();
}  
int main(){
    ll n;
	while(scanf("%lld",&n), (n|0)){
    	if(n < 0){
         	printf("%lld = -1 x ",n);
         	n = n*-1;
       	}
       	else printf("%lld = ",n);
       	primeFactors(n);
     }
    return 0;
}