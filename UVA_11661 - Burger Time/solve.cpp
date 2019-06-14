#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r",stdin);
//freopen("out.txt", "w", stdout);
 	int n, temp, cnt, i, j;	
 	bool flag;
 	string str;
 	while(scanf("%d", &n)){
 		if(n==0) break;
 		cin.ignore();
 		cnt = 0 ;
		temp = 200001;
		flag = false;

 		cin>>str;
		for(i = 0; i < str.size() + 1;i++){
			cnt = 0 ;
		 	if(str[i] == 'R') {
		 	      for(j = i + 1;j < str.size();j++){
		 	       	if(str[j] == 'D'){
		 	       		cnt = j - i;
		 	       	 	break;
		 	       	}
		 	       	else if(str[j] == 'R'){
		 	       	 	i = j;
		 	       	}
		 	       	else if(str[j] == 'Z'){
		 	       		temp = 0;
		 	       		flag = true;
		 	       		break;
		 	       	}
		 	      }
		 	}
		 	else if(str[i] == 'D') {
		 	      for(int j = i + 1;j<str.size();j++){
		 	       	if(str[j] == 'R'){
		 	       		cnt = j - i;
		 	       	 	break;
		 	       	}
		 	       	else if(str[j] =='D'){
		 	       	 	i = j;
		 	       	}
		 	       	else if(str[j] == 'Z'){
		 	       		temp = 0;
		 	       		flag = true;
		 	       		break;
		 	       	}
		 	      }
		 	}
		 	else if (str[i] == 'Z'){
		 		temp = 0;
		 	 	break;
		 	}
		 	if(cnt != 0 && temp > cnt ){
		 	 	temp = cnt;
		 	}
		 	if(flag) break;

		 }
	 	if(temp == 0){
	 	 	printf("0\n");
	 	}
	 	else {
	 	 	printf("%d\n", temp);
	 	}
 		//memset(str, '\0', sizeof str);
 	}
return 0;
}