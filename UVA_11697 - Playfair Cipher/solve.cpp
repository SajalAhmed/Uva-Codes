#include <bits/stdc++.h>
using namespace std;
struct cType{
 	int r1, c1, r2, c2;
 	cType(){
 	 	r1 = c1 = r2 = c2 = -1;
 	}
} sType;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	int t, cnt = 0;
	string str, s, temp = "", alpha = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
	char arr[6][6];
	map<char, int> mp;
	scanf("%d", &t);
	getchar();
	while(t--){
	  getline(cin, str);
	  getline(cin, s);
	   
	  for(int i = 0; i < str.size(); i++){
	   	mp[str[i] - 32]++;
	   	if(mp[str[i] - 32] == 1 && str[i] != ' '){
	   	 	temp += str[i] -  32;
	   	 	cnt++;
	   	 	if(cnt == 25) break;
	   	}
	  }
	  if(cnt < 25)
	  for(int i = 0; i < 25; i++){
	   	if(mp[alpha[i]] == 0) temp += alpha[i];
	  }
	  cnt = 0;
	  for(int i = 0; i < 5; i++){
	   	for(int j = 0; j < 5; j++){
	   	   arr[i][j] = temp[cnt++];
	   	}
	  }
	  temp = "";
	  for(int i = 0; i < s.size(); i++){
	   	if(s[i] != ' ') temp += s[i] - 32;
	  }
	  s = "";
	  if(temp.size()  == 1){
	   	s += temp[0];
	   	s += 'X';
	  }
	  else{
	   	for(int i = 0; i < temp.size(); i += 2){
	   		if(i + 1 == temp.size()){
	   		 	s += temp[i];
	   		}
	   	 	else if(temp[i] == temp[i + 1]){
	   	 	 	s += temp[i];
	   	 	 	s += 'X';
	   	 	 	i--;
	   	 	}
	   	 	else{
	   	 	 	s += temp[i];
	   	 	 	s += temp[i + 1];
	   	 	}
	   	}
	  }
	  temp = s;
	  if(temp.size() % 2 == 1) temp += 'X';
	  cnt = temp.size();
	  for(int i = 0; i < temp.size(); i += 2){
	  	 if(temp[i] == temp[i+1]){
	  	   temp[i + 1] = 'X';
	  	   i -= 2;
	  	   continue;
	  	 }
	  	else{
   	 	for(int j = 0; j < 5; j++){
   	  		for(int k = 0; k < 5; k++){
   	  	 		if(arr[j][k] == temp[i]){
   	  	 	 	   sType.r1 = j + 1;
   	  	 	 	   sType.c1 = k + 1;
   	  	 		}
   	  	 		if(arr[j][k] == temp[i + 1]){
   	  	 		 	sType.r2 = j + 1;
   	  	 		 	sType.c2 = k + 1;
   	  	 		}
   	  		}
   	  		if(sType.r1 > 0 && sType.r2 > 0) break;
   	 	}
   	 	if(sType.r1 == sType.r2){
   	 	  temp[i] = arr[sType.r1 - 1][sType.c1 % 5];
   	 	  temp[i + 1] = arr[sType.r2 - 1][sType.c2 % 5];
   	 	}
   	 	else if(sType.c1 == sType.c2){
   	 	  temp[i] = arr[sType.r1 % 5][sType.c1 - 1];
   	 	  temp[i + 1] = arr[sType.r2 % 5][sType.c2 - 1];
   	 	}
   	 	else{
   	 	  temp [i] = arr[sType.r1 - 1][sType.c2 - 1];
   	 	  temp[i + 1] = arr[sType.r2 - 1][sType.c1 - 1];
   	 	}
   	    sType.r1 = sType.r2 = sType.c1 = sType.c2 = -1;
   	    }
	  }
	  cout<<temp<<endl;
	  temp = "";
	  cnt = 0;
	  mp.clear();
	}
return 0;
}