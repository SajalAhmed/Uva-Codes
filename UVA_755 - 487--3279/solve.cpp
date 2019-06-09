#include <bits/stdc++.h>
#define LOCAL_DEFINE 1
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;

string cnvStandar(string  str){
 	int temp = 0;
 	string c = "22233344455566677778889991", s = "";
 	for(int i = 0; i < str.size();i++){
 	 	if(str[i] >= 'A' && str[i] <= 'Y'){
 	 	 	s += c[str[i] - 'A'];
 	 	 	temp++;
 	 	}
 	 	else if( str[i] >= '0' && str[i] <= '9'){
 	 	 	s += str[i];
 	 	 	temp++;
 	 	}
 	 	if(temp == 3){
 	 		s += '-';
 	 		temp++;
 	 	}
 	}
 	return s;
}

int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif
		int n, temp, cnt = 1;
 	    string str, s;
 	    bool flag;
 	    vector<string> v;
 	    map<string , int> mp;
 	    scanf("%d", &n);
 	    while(n--){
 	    	if(cnt > 1) printf("\n");
 	    	scanf("%d", &temp);
 	    	for(int i = 0;i < temp;i++){
 	    	 	cin>>str;
 	    	 	s =  cnvStandar(str);
 	    	 	v.push_back(s);
 	    	 	mp[s]++;
 	    	}
 	    	sort(all(v));
 	    	UNIQUE(v);
 	    	flag = false;
 	    	for(int i = 0;i < v.size(); i++){
 	    		if(mp[v[i]] > 1){
 	    	 		cout<<v[i]<<" "<<mp[v[i]]<<endl;
 	    	 		flag = true;
 	    	 	}	
 	       	}
 	       	if(!flag) printf("No duplicates.\n");
 	       	cnt++;
 	       	v.clear();
 	       	mp.clear();
 	    }

return 0;
}