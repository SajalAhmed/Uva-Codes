#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
typedef long long int ll;
ll fac(int n){
 	if(n == 0 || n == 1) return 1;
 	return n * fac(n - 1);
}
int main(){
	int t, l;
	string str;
	map<char,int> mp;
	scanf("%d", &t);
	for(int j = 1; j <= t; j++){
	 	cin>>str;
	 	l = str.size();
	 	for(int i = 0;i < l; i++){
	 	 	mp[str[i]]++;
	 	}
	 	ll u = 1;
	 	sort(all(str));
	 	UNIQUE(str);
	 	for(int i = 0;i < str.size(); i++){
	 	    if(mp[str[i]] > 1) u *= fac(mp[str[i]]);
	 	}	
	 	printf("Data set %d: %lld\n", j, fac(l) / u);
	 	mp.clear();
	}
	return 0;
}