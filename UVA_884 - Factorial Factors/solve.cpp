#include <bits/stdc++.h>
#define MAX 1000001
#define size_ 78498
using namespace std;
typedef long long int ll;
vector<ll> v;
int prime[MAX], ans[MAX] = {0, 0};
void sieve(){
    for(ll i = 2; i < MAX; i++) { 
        if(prime[i] == 0){ 
            for(ll j = i*i; j < MAX; j += i){ 
                prime[j] = 1; 
            }
            v.push_back(i); 
        } 
    }
}

void solve(){
  ll temp;
  for(ll i = 2; i < MAX; i++){
  	ans[i] = ans[i - 1];
  	temp = i;
  	for(int j = 0; j < size_ && v[j] * v[j] <= temp; j++){
  		while(temp % v[j] == 0){
  		 	temp /= v[j];
  		 	ans[i]++;
  	 	}
  	}
  	if(temp > 1) ans[i]++;
  }
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
 	 ll a;
 	 sieve();
 	 solve();
 	 while(scanf("%lld", &a) != EOF){
 	 	printf("%lld\n", ans[a]);
 	 }
 	 return 0;
}