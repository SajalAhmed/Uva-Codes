#include <bits/stdc++.h>
using namespace std;
int main(){
	string str, temp;
	while(getline(cin, str)){
	 	if(str == "DONE") break;
	 	temp = "";
	 	for(int i = 0;i < str.size(); i++){
	 	 	if(str[i] >= 'A' && str[i] <= 'Z'){
	 	 	 	temp += str[i] + 32;
	 	 	}
	 	 	else if(str[i] >= 'a' && str[i] <= 'z'){
	 	 	 	temp += str[i];
	 	 	}
	 	}
	 	str = temp;
	 	reverse(temp.begin(), temp.end());
	 	if(str == temp){
	 	 	printf("You won't be eaten!\n");
	 	}
	 	else{
	 	 	printf("Uh oh..\n");
	 	}
	}
return 0;
}