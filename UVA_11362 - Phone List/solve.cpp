#include <bits/stdc++.h>
using namespace std;
bool check(string s1, string s2){
 	if(s1.size() > s2.size()){
 	 	string temp = s1;
 	 	s1 = s2;
 	 	s2 = temp;
 	}
 	int t = s1.size();
 	if(s1 == s2.substr(0, t)) return false;
 	return true;	
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	int t, n, temp = 1;
	string str;
	vector<string> v;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
		 	cin>> str;
		 	v.push_back(str);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n - 1 ;i++){
		 	 if(!check(v[i], v[i + 1])){
		 	  	temp = 0;
		 	  	break;
		 	 }
		}   
		if(temp) printf("YES\n");
		else printf("NO\n");
		v.clear();
		temp = 1;
	}
return 0;
}