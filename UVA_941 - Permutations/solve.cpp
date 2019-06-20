#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll fib[21] = {1, 1}, m;
	int t, temp = 0;
	string str;

	for(int i = 2; i <= 20; i++){
	  fib[i] = fib[i - 1] * i;
	}
	scanf("%d", &t);
	while(t--){
	 	cin>>str;
	 	scanf("%lld", &m);
	 	sort(str.begin(), str.end());
	 	for(int n = str.size(); n > 0; n--){
	 	 	for(ll i = 0; i < fib[n]; i += (fib[n] / n)){
	 	 	 	if(m >= i && m <= i + (fib[n] / n) - 1){
	 	 	 	  printf("%c", str[temp]);
	 	 	 	  str.erase(temp, 1);
	 	 	 	  m = abs(i - m);
	 	 	 	}
	 	 	 	temp++;	 	 	 	
	 	 	}
	 	 	temp = 0;
	 	}
	 	printf("\n");
	} 
return 0;
}