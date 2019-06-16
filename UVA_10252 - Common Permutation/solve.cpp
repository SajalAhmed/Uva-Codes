#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
 	map<char, int> m1, m2;
 	string s1, s2, t1, t2 = "";
 	while(getline(cin, s1)){
 		getline(cin, s2);
 	 	sort(all(s1));
 	 	sort(all(s2));
 	 	t1 = s1;
 	 	UNIQUE(t1);
 	 	for(int i = 0; i < s1.size(); i++)
 	 	 	m1[s1[i]]++;
 
 	 	for(int i = 0; i < s2.size(); i++)
 	 		m2[s2[i]]++;

 	 	for(int i = 0; i < t1.size(); i++){
 	 	 	if(m1[t1[i]] > 0 && m2[t1[i]] > 0){
 	 	 	 	int t = min(m1[t1[i]], m2[t1[i]]);

 	 	 	 	for(int j = 0; j < t; j++){
 	 	 	 	 	t2 += t1[i];
 	 	 	 	}
 	 	 	}
 	 	}
 	 	cout<<t2<<endl;
 	 	m1.clear();
 	 	m2.clear();
 	    t2 = s1 = s2 = "";

 	}
}