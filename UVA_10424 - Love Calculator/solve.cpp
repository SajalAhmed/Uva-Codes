#include <bits/stdc++.h>
using namespace std;
int strLength(char str[]){
	int temp = 0 ;
 	for(int i= 0;str[i] !='\0'; i++){
 		if(str[i] <= 'Z' && str[i] >='A'){
 		 	temp += (str[i] - 'A') + 1;
 		}
 		else if(str[i] >= 'a' && str[i] <='z'){
 		 	temp += (str[i] - 'a') + 1;
 		}
 	}
 	return temp;
}
int sValue(int a){
	if(a < 10) return a;
	int sum = 0 ;
	while(a > 0){
	 	sum += a % 10;
	 	a /= 10;
	}
	return sValue(sum); 	
}
int main(){
//freopen("input.txt", "r",stdin);
//freopen("out.txt", "w", stdout);
	
  	char s1[26],s2[26];
  	float a, b;
 	while(gets(s1)){
 		gets(s2);
 		
 		a = (float)sValue(strLength(s1));
 		b = (float)sValue(strLength(s2));

 		printf("%.2f %\n",(min(a,b) / max(a,b)) * 100.0);
 		
 	 	 
 	}                            
 	
 return 0;
}