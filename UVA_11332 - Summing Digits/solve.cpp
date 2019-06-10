#include <bits/stdc++.h>
using namespace std;
int dsum(int n){
 	if(n < 10)
 	 	return n;
 	else                                   
 	 	return n % 10 + dsum(n / 10);
}
int main(){
	int n, ans = 0;
	while(scanf("%d", &n), (n||0)){
	 	ans = dsum(n);
	 	while(ans > 9){
	 	 ans = dsum(ans);
	 	}
	 	printf("%d\n", ans);
	}
return 0;
}
