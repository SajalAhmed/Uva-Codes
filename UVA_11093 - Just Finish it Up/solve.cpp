#include <bits/stdc++.h>
using namespace std;
struct cType {
  	int p;
  	int q;
  	cType(){
  	 	q = 0;
  	}
};
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int t, n, temp, start, cnt;
	vector<cType> v;
	cType c;
	bool flag;
	scanf("%d", &t);
	for(int l = 1;l <= t;l++){
	 	scanf("%d", &n);
	 	for(int i = 0;i < n;i++){
	 	    scanf("%d", &c.p);
	 	    v.push_back(c);
	 	}
	 	for(int i = 0;i < n;i++){
	 	 	scanf("%d", &temp);
	 	 	v[i].q = temp;

	 	}	

	 	for(int i = 0;i < n;i++) 
	 		v.push_back(v[i]);

	 	flag = false;

	 	for(int i = 0;i < n; i++){
	 		start = i;
	 		temp = cnt = 0;
	 		if(v[i].q <= v[i].p){
	 	 		for(int j = i;j < n + n;j++, i++){
	 	 			if(v[j].q <= v[j].p + temp){
	 	 				temp = abs((temp + v[j].p) - v[j].q);
	 	 			 	cnt++;
	 	 			}
	 	 			else break;
	 	 			if(cnt == n) flag = true;
	 		 	}	 	
	 		 	i--;
	 	 	}
	 	 	
	 	 	if(flag) break;
	 	}
	 	if(flag) printf("Case %d: Possible from station %d\n", l, start + 1);
	 	else printf("Case %d: Not possible\n", l);
	 	v.clear();
	}

return 0; 	
}