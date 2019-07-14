#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int sz , temp, sum = 0;
	while(cin>>str){
	 	sz = str.size();
	 	if(sz == 1 && str[0] == '0') break;
	 	for(int i = 0 ; i < sz; i++){
	 		temp = pow(2, sz - i);
	 	 	sum += (str[i] - '0') * (temp - 1);
	 	}
	 	printf("%d\n", sum);
	 	sum = 0;
	}
return 0;
}