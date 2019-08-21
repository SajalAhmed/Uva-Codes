#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int strTonum(string str){
	int ans = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' ') return -1;
		ans = (ans * 10) + (str[i] - '0');
	}
 	return ans;
}
vector<int> split(string str) { 
	int temp;
    vector<int> internal;
    stringstream ss(str); 
    string word;

    while(getline(ss, word, ' ')) {
    	temp = strTonum(word);
        internal.push_back(temp);
    }
    return internal;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	int mn, mx, temp, cnt;
 	string x, y;
 	vector<int> a, b, v;
 	while(getline(cin, x)){
 		getline(cin, y);
 		a = split(x);
 		b = split(y);
 		sort(a.begin(), a.end());
 		sort(b.begin(), b.end());
 		UNIQUE(a);
 		UNIQUE(b);
 		cnt = 0;
 		mn = a.size();
 		mx = b.size();
 		set_intersection(a.begin(),a.end(), b.begin(), b.end(), inserter(v,v.begin()));
 		cnt = v.size();
 		if(cnt == mn || cnt == mx){
 		 	if(mn == mx){
 		 	 	printf("A equals B\n");
 		 	}
 		 	else if(mn < mx){
 		 	 	printf("A is a proper subset of B\n");
 		 	}
 		 	else if(mx < mn){
 		 	 	printf("B is a proper subset of A\n");
 		 	}
 		}
 		else if(cnt == 0){
 		 	printf("A and B are disjoint\n");
 		}
 		else printf("I'm confused!\n");
 		a.clear();
 		b.clear();   
 		v.clear();
    }
    return 0;
}