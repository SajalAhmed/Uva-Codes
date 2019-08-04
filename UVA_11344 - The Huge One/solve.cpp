#include <bits/stdc++.h>
using namespace std;
int doSum(string str, int l){
 	int sum = 0;
 	for(int i = 0; i < l; i++){
 		sum += (str[i] - '0');
 	}
 	return sum;
}
bool divbyV(string str, int l, int v){
 	if(l > 1){
 	 	if((((str[l-2] - '0') * 10) + (str[l-1] - '0')) % v == 0){
 	 	 	return true;
 	 	}
 	 	else return false;
 	}
 	else if((str[l-1] - '0') % v == 0){
 	 	return true;
 	}
 	else return false;
}
bool divby8(string str, int l){
	int temp;
 	if(l > 2){
 	 	temp = (((str[l-3] - '0')	* 100) + ((str[l-2] - '0') * 10) + (str[l-1] - '0'));
 	 	if(temp % 8  == 0){
 	 	 	return true;
 	 	}
 	 	else return false;
 	}
 	if(divbyV(str, l, 8)){
 		return true;
 	}
 	else return false;
}
bool divby2(string str, int l){
 	 if((str[l-1] - '0') % 2 == 0) return true;
 	 else return false;
}
bool divby3(string str, int sum){
 	if(sum % 3 == 0) return true;
 	else return false;
}
int main(){
//freopen("input.txt", "r",stdin);
//freopen("output.txt", "w", stdout);
	bool flag;
	string str;
 	int t, n, in, l, temp;
 	scanf("%d", &t);
 	while(t--){
 	 	cin>>str;
 	 	scanf("%d", &n);
 	 	flag = true;
 	 	l = str.size();
 	 	temp = doSum(str, l);
 	 	for(int i = 0;i < n; i++){
 	 		scanf("%d", &in);
 	 		if(in == 2 && flag){
 	 		 	flag = divby2(str, l);
 	 		}
 	 		else if(in == 3 && flag){
            	flag = divby3(str, temp);
            }
            else if(in == 4 && flag){
            	flag = divbyV(str, l, 4);
            }
 	 		else if(in == 5 && flag){
 	 			if(((str[l-1] - '0')) % 5 != 0) flag = false;
 	 	 	}
 	 	 	else if(in == 6 && flag){
 	 	 	 	flag = (divby2(str, l) & divby3(str, temp));
 	 	 	}
 	 	 	else if(in == 8 && flag){
 	 	 	 	flag = divby8(str, l);
 	 	 	}
 	 	 	else if(in == 9 && flag){
 	 	 	 	if(temp % 9 != 0) flag = false;
 	 	 	}
 	 	 	else if(in == 10 && flag){
 	 	 	 	if(str[l-1] != '0') flag = false;
 	 	 	}
 	 	 	else if(in == 12 && flag){
 	 	 	 	flag = (divby3(str, temp) & divbyV(str, l, 4));
 	 	 	}
 	 	 	else if(flag){
 	 	 	 	int y = 0;
 	 	 	 	for(int i = 0;i < l;i++){
 	 	 	 	 	y = y * 10 + (str[i] - '0');
 	 	 	 	 	y = y % in;
 	 	 	 	}
 	 	 	 	if(y) flag = false;
 	 	 	}
 	 	}
 	 	if(flag)cout<<str<<" - Wonderful.\n";
 	 	else cout<<str<<" - Simple.\n";
 	}
 	return 0;
}