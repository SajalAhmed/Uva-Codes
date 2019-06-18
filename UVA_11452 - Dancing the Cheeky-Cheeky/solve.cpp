#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("ouput.txt", "w", stdout);
	int t, n, cnt = 0;
	string str, temp;
	scanf("%d", &t);
	while(t--){
	 	cin>> str;
	 	n = str.size() / 2;
	 	cnt = 0;
	 	while(1){
	 	   for(int i = 0; i < n; i++){
	 	     if(str[i] == str[n + i]) cnt++;
	 	   }
	 	   if(cnt == n) break;
	 	   n--;
	 	   cnt = 0;
	 	}
	 	temp = str.substr(0, n);
	 	cnt = str.size() - (n * 2);
	 	str = "";
	 	for(int i = 0; i < 8; i++){
	 	  str += temp[cnt % n];
	 	  cnt++;                                
	 	}
	 	cout<<str<<"..."<<endl;
	}
return 0;
}