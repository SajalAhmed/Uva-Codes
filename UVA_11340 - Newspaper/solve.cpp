#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt",  "r", stdin);
//freopen("output.txt", "w", stdout);
 	int d, n, temp, L;
 	double sum =  0;
 	char c;
 	string str;
 	map<char, int> mp;

	scanf("%d", &n);
	while(n--){
	 	scanf("%d", &temp);
	 	for(int i = 0;i < temp;i++){
	 		cin>> c >> d;
	 	 	mp[c] = d;
	 	}
	 	scanf("%d", &temp);
	 	sum = 0;
	 	cin.ignore();
	 	for(int i = 0;i < temp;i++){
	 	 	getline(cin, str);
	 	 	L = str.size();
	 	 	for(int j = 0;j < L;j++){
	 	 	 	sum += mp[str[j]]; 
	 	 	}
	 	}
	 	printf("%0.2lf$\n",sum / 100);
	 	mp.clear();
	 }	  
return 0;
}