#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r",stdin);
 	int t, n, m, s, b, cnt = 1;
 	bool flag;
 	string str, temp = "";
 	scanf("%d", &t);
 	getchar();
 	while(t--){
 	 	getline(cin,str);
 	 	temp = "";
 	 	flag = true;
 	 	for(int i = 0; i < str.size(); i++){
 	 	 	if(str[i] >= 'a' && str[i] <= 'z'){
 	 	 	 	temp += str[i];
 	 	 	}
 	 	}
 	 	n = temp.size();
 	 	m = (int)sqrt(n);
 	 	if(m * m < n) flag = false;
 	 	else{
 	 		if(n % 2 == 1){
 	 		 	s = (n / 2) + 1;
 	 		}
 	 		else{ 
 	 			s = (n / 2);
 	 		}
 	 		b = (n / 2) - 1;
 	 		for(;b >= 0;b--,s++){
 	 		 	if(temp[b] != temp[s]){
 	 		 	 	flag = false;
 	 		 	 	break;
 	 		 	}
 	 		}
 	 	}
 	 	if(flag){
 	 	 	printf("Case #%d:\n%d\n", cnt++, m);
 	 	}
 	 	else{
 	 	 	printf("Case #%d:\nNo magic :(\n", cnt++);
 	 	}
 	}
}