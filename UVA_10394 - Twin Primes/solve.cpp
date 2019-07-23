#include <bits/stdc++.h>
#define MAX 20000000
using namespace std;
typedef long long int ll;
bool prime[MAX];
struct cType{ int a, b;} arr;
vector<cType> v;
void sieve(){
	memset(prime, true, sizeof(prime)); 
	int temp = 0;
	for(ll i = 2; i < MAX - 2; i++) { 
		if(prime[i]){
			for(ll j = i*i; j < MAX; j += i){ 
				prime[j] = false; 
			}	
		}
		if(prime[i] && prime[i+2]){
			arr.a = i;
			arr.b = i + 2;
			v.push_back(arr);
			temp++;
		}
		if(temp >= 100000) return; 
	} 
}
int main(){
 	int n;
 	sieve();
 	while(scanf("%d", &n) != EOF){
 	 	printf("(%d, %d)\n", v[n-1].a, v[n-1].b);
 	}
 	return 0;
}
