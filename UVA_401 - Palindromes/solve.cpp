#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
 	map<char, char> mp;
 	bool flag;
 	string str, temp;
 	string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
 	string s2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
 	for(int i = 0; i < s1.size(); i++){
 	    mp[s1[i]] = s2[i];
 	}
 	while(cin>>str){
 	 	temp = str;
 	 	flag = true;
 	 	reverse(temp.begin(), temp.end());
 	 	for(int i = 0;i < temp.size(); i++){
 	 	 	if(mp[str[i]] != temp[i]){
 	 	 	 	flag = false;
 	 	 	 	break;
 	 	 	}
 	 	}
 	 	cout<<str;
 	 	if(flag){
 	 	 	if(temp == str)
 	 	 	 	printf(" -- is a mirrored palindrome.");
 	 	 	else
 	 	 		printf(" -- is a mirrored string.");
 	 	}
 	 	else{
 	 	 	if(temp == str)
 	 	 		printf(" -- is a regular palindrome.");
 	 	 	else
 	 	 		printf(" -- is not a palindrome.");	
 	 	}
 	 	printf("\n\n");
 	}
}