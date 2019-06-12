#include <bits/stdc++.h>
using namespace std;
struct cType{
  	bool flag;
  	string str;
  	cType(){
  	 	flag = true;
  	}
};
int main(){
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	string str, s;
 	map<string, string> mp;
 	int n, L , cnt, temp;
 	vector<string> v;

 	while(scanf("%d", &n), (n||0)){
 		cType arr[n + 1];
 	 	for(int i = 0; i < n; i++){
 	 		cin>> s >> str;
 	 		mp[s] = str;
 	 		v.push_back(s);
 	 	}
 	 	temp = 0;
 	 	for(int i = 0;i < n; i++){
 	 		L = mp[v[i]].size();
 	 		cnt = 0;
  	 	 	for(int j = temp; j <= n; j++){
 	 	 	 	if(arr[j].flag){
 	 	 	 	 	cnt++;
 	 	 	 	}
 	 	 	 	if(L == cnt){
 	 	 	 	 	 arr[j].flag = false;
 	 	 	 	 	 arr[j].str = v[i];
 	 	 	 	 	 temp = j + 1;
 	 	 	 	 	 if(temp == n) temp = 0;
 	 	 	 	 	 break;
 	 	 	 	}
 	 	 	 	if(j + 1 == n) j = -1;
 	 	 	}
 	 	}
 	 	for(int i = 0; i < n; i++){
 	 	 	if(i > 0) printf(" ");
 	 	 	cout<<arr[i].str;
 	 	}
 	 	printf("\n");
 	 	mp.clear();
 	 	v.clear();
 	 	
 	}
	return 0;
}