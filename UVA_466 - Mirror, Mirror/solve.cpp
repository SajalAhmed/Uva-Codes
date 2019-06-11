#include <bits/stdc++.h>
//#define LOCAL_DEFINE 1
using namespace std;
char str[11][11], trans[11][11];
void ninety_deg_ref(int n){
	char temp;
 	int l = n - 1;
 	for(int i = 0; i < n / 2 ; i++){
 	    for(int j = i; j < n - (i + 1); j++){
 	     	temp = str[i][j];
 	     	str[i][j] = str[l-j][i];
 	     	str[l-j][i] = str[l-i][l-j];
 	     	str[l-i][l-j] = str[j][l-i];	
 	     	str[j][l-i] = temp;
 	    }                          
 	}
}
void  vertical_ref(int n){
	int l = n - 1;
 	for(int i = 0; i < n / 2; i++){
 	 	for(int j = 0; j < n; j++){
 	 	 	swap(str[i][j],str[l][j]);
 	 	}
 	 	l--;
 	} 	
}
bool check(int n){
	bool flag = true;
 	for(int i = 0; i < n; i++){
 	 	for(int j = 0; j < n; j++){
 	 		if(str[i][j] == trans[i][j])
 	 			continue;
 	 		else
 	 			return false;
 	 	}
 	}
 	return true;
}
int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, cnt = 1;
    bool flag;
    while(scanf("%d", &n) != EOF){
     	getchar();
     	for(int i = 0; i < n; i++){
     	 	scanf("%s %s", str[i], trans[i]);
     	}
     	if(check(n)){
     	 	 printf("Pattern %d was preserved.\n", cnt++);
     	 }
     	 else {
     	 	flag = false;
     	 	 for(int i = 1; i <= 3; i++){
     	 	  	ninety_deg_ref(n);
     	 	  	if(check(n)){
     	 	  	 	printf("Pattern %d was rotated %d degrees.\n",cnt++, 90 * i);
     	 	  	 	flag = true;
     	 	  	 	break;
     	 	  	}
     	 	 }
     	 	 if(!flag){
     	 	 	 ninety_deg_ref(n);
     	 	  	 vertical_ref(n);
     	 	  	 if(check(n)){
     	 	  	  	printf("Pattern %d was reflected vertically.\n", cnt++);
     	 	  	  	flag = true;
     	 	  	 }
     	 	  	 else
     	 	 	 for(int i = 1; i <= 3; i++){
     	 	  	 	ninety_deg_ref(n);
     	 	  	 	if(check(n)){
     	 	  	 		printf("Pattern %d was reflected vertically and rotated %d degrees.\n",cnt++, 90 * i);
     	 	  	 		flag = true;
     	 	  	 		break;
     	 	  		}
     	 	 	}
     	 	 }
     	 	 if(!flag){
     	 	  	printf("Pattern %d was improperly transformed.\n", cnt++);
     	 	 }
     	 }
    }
 	
return 0;
}