#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string n) { 
    string num = n; 
    int dec_value = 0; 
  
    int base = 1; 
  
    int len = num.length(); 
    for (int i = len - 1; i >= 0; i--) { 
        if (num[i] == '1') 
            dec_value += base; 
        base = base * 2; 
    } 
  
    return dec_value; 
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	string str, temp = "";
 	while(getline(cin, str)){
 	  if(str == "___________") continue;
 	  else{     
 	   	for(int i = 2 ; i < 10; i++){
 	   	   if(str[i] == ' ') temp += '0';
 	   	   else if(str[i] == 'o') temp += '1';
 	   	}
 	   	printf("%c", binaryToDecimal(temp));
 	  }
 	  temp = "";
 	}
}