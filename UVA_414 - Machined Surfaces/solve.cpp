#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
 	int n, temp, cnt;
 	char str[26];
 	vector<int> v;
 	while(scanf("%d", &n), (n||0)){
 		getchar();
 		temp = -1;
 	 	for(int l = 0; l < n; l++){
 	 	   gets(str);
 	 	   cnt = 0;
 	 	   for(int i = 0; str[i] != '\0'; i++){
 	 	    	if(str[i] == 'X') cnt++;
 	 	   }
 	 	   if(temp < cnt){
 	 	    	temp = cnt;
 	 	   }
 	 	   v.push_back(cnt);
 	 	}
 	 	cnt = 0;

 	 	for(int i = 0; i < n;i++){
 	 	 	cnt += temp - v[i];
 	 	}
 	 	printf("%d\n", cnt);
 	 	v.clear();

 	}    
return 0;
}