#include <bits/stdc++.h>
#define MAX 1001000
using namespace std;
typedef long long int ll;
ll arr[MAX];
int main(){
	ll a, b, temp, f;
	while(scanf("%lld%lld", &a, &b) != EOF){
		if(a > 1 && b > 1){
		f = 1;
		arr[f] = a;
	 	while(1){
	 		if(a == 1) break;
	 	    else if((a % b) == 0 && arr[f] > (a/b)){
	 	    	a = a / b;
	 	     	arr[++f] = a;
	 	    }
	 	    else{
	 	     	f = -1;
	 	     	break;
	 	    }
	 	}
	 	}
	 	else f = -1;
	 	if(f > 0){
	 		for(int i = 1; i <= f; i++){
	 		 	if(i > 1) printf(" ");
	 		 	printf("%lld", arr[i]);
	 		}
	 	}
	 	else printf("Boring!");
	 	printf("\n");
	}
 	 return 0;
}