#include <bits/stdc++.h>
using namespace std;
int main(){
 	int t, temp, ans, flag;
 	while(scanf("%d", &t)){
 	 	if(t  < 0) break;
 	 	ans = 0;
 	 	for(int i = sqrt(t) + 1; i > 1; i--){
 	 		temp = t;
 	 		flag = 1;
 		 	for(int j = 1; j <= i; j++){
 		 	 	if(temp % i == 1){
 		 	 	    temp = (temp / i) * (i - 1);
 		 	 	}
 		 	 	else{
 		 	 	 	flag = -1;
 		 	 	 	break;
 		 	 	}
 		 	}
 		 	if(temp % i == 0 && flag > 0){
 		 		ans = i; 
 		 		break;
 		 	}
 	 	}  
 
 	 	if(ans > 0)printf("%d coconuts, %d people and 1 monkey\n",t, ans);
 	 	else printf("%d coconuts, no solution\n", t);
 	}
}