#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, ans;
	while(scanf("%d %d", &n, &m) != EOF){
	 	ans = n;
	 	while(n / m){
	 	 	ans += (n / m);
	 	 	n = (n / m) + (n % m);	
	 	}
	 	printf("%d\n", ans);
	 }
 	return 0;
}