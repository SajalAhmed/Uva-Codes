#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	string str;
	int n, t, cnt = 0,  max_ = 0;
  	int arr[128];
  	bool temp[11];
  	vector<string> v;
  	arr['q'] = arr['a'] = arr['z'] = 1;
  	arr['w'] = arr['s'] = arr['x'] = 2;
  	arr['e'] = arr['d'] = arr['c'] = 3;
  	arr['r'] = arr['f'] = arr['v'] = arr['t'] = arr['g'] = arr['b'] = 4;
  	arr['y'] = arr['h'] = arr['n'] = arr['u'] = arr['j'] = arr['m'] = 7;
  	arr['i'] = arr['k'] = 8;
  	arr['o'] = arr['l'] = 9;
  	arr['p'] = 10;

  	while(scanf("%d %d", &n, &t) != EOF){
  		memset(temp, false, sizeof temp);
  		for(int i = 0; i < n; i++){
  			scanf("%d", &max_);
  			temp[max_] = true; 
  		}
  		max_ = 0;
  		for(int i = 0; i < t; i++){
  		    cin>> str;
  		    for(int j = 0; j < str.size(); j++){
  		        if(temp[arr[str[j]]]){
  		         	cnt = -1;
  		         	break;
  		        }
  		    }
  		    if(cnt == 0 && str.size() > max_){
  		    	v.clear();
  		     	v.push_back(str);
  		     	max_ = str.size();
  			}
  			else if(cnt == 0 && str.size() == max_){
  			 	v.push_back(str);
  			}
  		    cnt = 0 ;
  		}
  		if(!v.empty()){
  			sort(v.begin(), v.end());
  			UNIQUE(v);
  			cnt = v.size();   
  			printf("%d\n", cnt);
  			for(int i = 0; i < cnt; i++){
  		  		cout<<v[i]<<endl;
  			}
  			v.clear();
  	   }
  	   else printf("0\n");
  	   cnt = max_ = 0;
  	}
	return 0;
}