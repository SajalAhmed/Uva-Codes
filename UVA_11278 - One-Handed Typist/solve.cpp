#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	char stnd[200] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
	char dvor[201] = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";
	char str[3001];
	while(gets(str) != NULL){
	 	for(int i = 0; i < strlen(str);i++){
	 	 	for(int j = 0; j < strlen(stnd); j++){
	 	 	 	if(str[i] == stnd[j]){
	 	 	 	 	printf("%c",dvor[j]);
	 	 	 	 	break;
	 	 	 	}
	 	 	}
	 	}
	 	printf("\n");
	}
return 0;
}