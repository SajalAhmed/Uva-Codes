#include <bits/stdc++.h>
using namespace std;
struct Str{
  	int c;
  	int p;
  	int value[101];
};
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int n, m, temp, flag;
	vector<int> v;
	while(scanf("%d%d", &n, &m)){
		if(n==0) break;
		Str w[101];
	 	for(int i=0;i<n;i++){
	 		scanf("%d", &temp);
	 	 	v.push_back(temp);
	 	}
	 	for(int i=0;i<m;i++){
	 	 	scanf("%d%d",&w[i].c , &w[i].p);
	 	 	for(int j=0;j < w[i].c;j++){
	 	 	 	scanf("%d", &w[i].value[j]);
	 	 	}	 
		}
		temp = 0;
		flag = 1;
		for(int i=0;i<m;i++){
		 	for(int j=0;j<w[i].c;j++){
		 	 	for(int k = 0;k < n;k++){
		 	 	 	if(v[k] == w[i].value[j]){
		 	 	 	 	temp++;
		 	 	 	 	break;
		 	 	 	}
		 	 	}
		 	}
		 	if(temp < w[i].p){
		 		flag = 0;
		 		break;
		 	}
		 	temp = 0;	
		}
		if(flag == 1) 
			printf("yes\n");
		else 
			printf("no\n");

		v.clear();
	}
return 0;
}