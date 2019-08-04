#include <bits/stdc++.h>
using namespace std;
int main(){
 	char s[1001];
 	int a, t;
 	while(gets(s)){
 	 	if(!(strcmp(s, "0")|0)) break;
 	 	t = strlen(s);
 	 	a = 0;
 	 	for(int i = 0;i < t; i++){
 	 		if(s[i] >= '0' && s[i] <= '9'){
 	 			a = a * 10 + (s[i] - '0');
 	 			a = a % 17; 	
 	 		}	
 	 	}
 	 	printf("%d\n", a > 0 ? 0 : 1);
 	}
 	return 0;
}