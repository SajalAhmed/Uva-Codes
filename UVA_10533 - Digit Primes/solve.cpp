#include <bits/stdc++.h> 
#define MAX 1000001
using namespace std; 
int digit[MAX];
bool prime[MAX];
void sieve() {  
	memset(prime, true, sizeof(prime)); 
	for(int i = 2; i*i <= MAX; i++) { 
		if(prime[i] == true) { 
			for(int j = i*i; j <= MAX; j += i){
				prime[j] = false; 
			}
		} 
	}  
} 
int sumOfdigit(int n){
	int sum = 0;
 	while(n){
 	 	sum += n % 10;
 	 	n = n / 10;
 	}
 	return sum;
}
int main() { 
	int a, b, t, temp;
	scanf("%d", &t);
	sieve();
	digit[1] = 0;
	for(int i = 2; i <= MAX; i++){
		digit[i] = digit[i-1];
	    if(prime[i] && prime[sumOfdigit(i)]){	
	      digit[i]++;
	    }
	}   
	while(t--){
	 	scanf("%d%d", &a, &b);
	 	printf("%d\n", digit[b] - digit[a-1]);
	}
	return 0; 
} 
