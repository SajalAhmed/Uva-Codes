#include <bits/stdc++.h>
using namespace std;
char str[200001];
bool isPalindrome(int s, int e){
   while(s < e){
    	if(str[s] != str[e]) return false;
    	s++;
    	e--;
   }
   return true;
}
bool isAlindrome(int n){
 	for(int i = 0; i < n - 1; i++){
 	 	if(isPalindrome(0, i) && isPalindrome(i + 1, n - 1)){
 	 	 	return true;
 	 	}
 	}
 	return false;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
 	int t, n;
 	scanf("%d", &t);
 	while(t--){
 	 	scanf("%s", str);
 	 	n = strlen(str);
 	 	if(isAlindrome(n)){
 	 	  printf("alindrome\n");
 	 	}
 	 	else if(isPalindrome(0, n - 1)){
 	 	 	printf("palindrome\n");
 	 	}
 	 	else{
 	 	 	printf("simple\n");
 	 	}
 	}
 	return 0;
}