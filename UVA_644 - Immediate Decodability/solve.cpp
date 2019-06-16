#include <bits/stdc++.h>
using namespace std;
bool cmp(string s1, string s2){
 	return s1.size() < s2.size();
}
int main(){
//freopen("input.txt", "r", stdin);
	int cnt = 1;
	bool flag = false;
 	string str;
 	vector<string> v;
 	while(cin>>str){
 		if(str[0] == '9'){
 		   sort(v.begin(), v.end(), cmp);
 		   for(int i = 0; i < v.size() && !flag; i++){
 		   	 for(int j = i + 1; j < v.size(); j++){
 		        if(v[i].size() < v[j].size() && v[j].substr(0, v[i].size()) == v[i]){
 		         	flag= true;
 		         	break;
 		        }
 		      }
 		   }
 		   if(flag){
 		     printf("Set %d is not immediately decodable\n", cnt++);
 		   }
 		   else{
 		    	printf("Set %d is immediately decodable\n", cnt++);
 		   }
 		   v.clear();
 		   flag = false;
 		}
 		else{
 	 	  v.push_back(str);	
		}
 	}
return 0;
}