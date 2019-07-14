#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
	int t, n;
	vector<int> v;
	map<int, int> mp;
	scanf("%d", &t);
	for(int j = 1; j <= t; j++){
	 	scanf("%d", &n);
	 	v.resize(n*n);
	 	for(int i = 1; i <= (n * n); i++){
	 	 	scanf("%d", &v[i-1]);
	 	 	mp[v[i - 1]]++;
	 	}
	 	sort(v.begin(), v.end());
	 	UNIQUE(v);
	 	for(int i = 0;i < v.size(); i++){
	 	 	if(mp[v[i]] > n){
	 	 	 	n = -1;
	 	 	 	break;
	 	 	}
	 	}
	 	if(n < 0) printf("Case %d: no\n", j);
	 	else printf("Case %d: yes\n", j);
	 	v.clear();
	 	mp.clear();
	}
return 0;
}
