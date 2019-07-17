#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int fib[15001];
void doFib(int n, int m){
    for(int i = 2; i <= n; i++){
     	fib[i] = (fib[i - 1] + fib[i - 2]) % m;
    }
}	
int main(){
	ll n;
    int t, a, b, m;
    int arr[6] = {0, 60, 300, 1500, 15000};
    int mod[6] = {0, 10, 100, 1000, 10000};
    scanf("%d", &t);
    while(t--){
     	scanf("%d%d%lld%d", &a, &b, &n, &m);
     	fib[0] = a % mod[m];
     	fib[1] = b % mod[m];
     	if(n < arr[m]){
     		doFib(n, mod[m]);
     		printf("%d\n", fib[n]);
     	}
     	else{
     		doFib(arr[m], mod[m]);
     		printf("%d\n", fib[n % arr[m]]);
     	}	
    }
	return 0;
}