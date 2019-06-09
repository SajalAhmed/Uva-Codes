#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
//freopen("input.txt", "r",stdin);
//freopen("out.txt", "w", stdout);
    vector<int> v, w;
    int temp, n, sum = 0;
    bool flag;
    map<int, int> mp;
	while(scanf("%d", &n) != EOF){
	 	for(int i = 0;i < n;i++){
	 	    scanf("%d", &temp);
	 	    v.push_back(temp);
	 	}	
	 	if( n == 1){
	 	 	printf("Jolly\n");
	 	 	v.clear();
	 	 	continue;
	 	}
	 	flag  = true;
	 	sum = 0;
	 	for(int i = 0;i < n - 1;i++){
	 		temp = abs(v[i] - v[i+1]);
	 		mp[temp]++;
	 		w.push_back(temp);
	 	}
	 	sort(all(w));
	 	UNIQUE(w);
	 	for(int i = 0;i <w.size();i++){
	 	 	if((w[i] < 1) || (w[i] >= n) || mp[w[i]] > 1){
	 	 	 	flag = false;
	 	 	 	break;
	 	 	}
	 	}
	 	if(flag) printf("Jolly\n");
	 	else printf("Not jolly\n");
	 	v.clear();
	 	w.clear();
	 	mp.clear();
	} 
return 0;
}