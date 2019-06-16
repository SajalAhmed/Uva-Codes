#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
	int n = 0;
 	string str, temp;
 	map<string , int> mp;
 	vector<string> v;
 	while(cin>>n>> str){
 	 	for(int i = 0; i < str.size() - n; i++){
 	 	 	temp = str.substr(i, n);
 	 	 	mp[temp]++;
 	 	 	v.push_back(temp);
 	 	}
 	 	sort(all(v));
 	 	UNIQUE(v);
 	 	n = -1; 
 	 	for(int i = 0; i < v.size(); i++){
 	 	   if(mp[v[i]] > n){
 	 	 	  temp = v[i];
 	 	 	  n = mp[v[i]]; 
 	 	   }
 	 	}
 	 	cout<<temp<<endl;
 	 	mp.clear();
 	 	v.clear();
 	}
 	return 0 ;
}