#include <bits/stdc++.h>
#define max_ 1000001
using namespace std;
typedef long long int ll;
int prime[1001];
int mu[max_], m[max_];
vector<ll> v;
void sieve(){
    for(ll i = 2; i < 1001; i++) { 
        if(prime[i] == 0){ 
            for(ll j = i*i; j < 1001; j += i){ 
                prime[j] = 1; 
            }
            v.push_back(i); 
        } 
    } 
}
void primeFac(int n){
  int cnt, f, temp;
  temp = n;
  cnt = f = 0;
  bool flag = true;
  for(int j = 0; j < v.size() && v[j] * v[j] <= n; j++){
  	  if(n % v[j] == 0){
    	while(n % v[j] == 0){
        	 n /= v[j];
         	 f++;
      	}
      	if(f > 1){
      	 	flag = false;
      	 	break;
      	}
      	if(f&1){ 
      		cnt++; 
      		f = 0; 
      	}
      }
    }
    if(n > 1) cnt++;
    if(cnt % 2 && flag){
    	mu[temp] = -1;
    }
    else if(flag) mu[temp] = 1;
    m[temp] = mu[temp] + m[temp - 1];

}
int main(){
	sieve();
	int n;
	mu[1] = m[1] = 1;
	for(int i = 2;i < max_ ; i++) primeFac(i);
	while(scanf("%d", &n), (n|0)){
	 	printf("%8d%8d%8d\n", n, mu[n], m[n]);
	}
	return 0;
}