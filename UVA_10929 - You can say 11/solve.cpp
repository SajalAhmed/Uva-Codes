#include <bits/stdc++.h>
using namespace std;
int main(){
	int t1, t2, sz;
	string str, temp;
	while(getline(cin, str)){
		t1 = t2 = 0;
		temp = "";
		sz = str.size();
		if(str[0] == '0' && sz == 1) break;
	 	for(int i = 0; i < sz; i++){
	 		if(str[i] >= '0' && str[i] <= '9'){
	 	 	   if(i % 2 == 0)
	 	 		 t1 += str[i] - '0';
	 	 	   else 
	 	 		  t2 += str[i] - '0';
	 	 	   temp += str[i]; 
	 	 	}
	 	}

	 	if((t1 - t2) % 11 == 0)
	 	 	cout<<temp<<" is a multiple of 11.\n";
	 	else
	 		cout<<temp<<" is not a multiple of 11.\n"; 
	}
	return 0;
}
