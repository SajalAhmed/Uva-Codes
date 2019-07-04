#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n , temp;
	map<int, int> mp;
	scanf("%d", &t);
	while(t--){
	 	scanf("%d", &n);
	 	for(int i = 1;i  <= n; i++){
	 		temp = i;
	 	 	if(temp < 10) mp[temp]++;
	 	 	else{
	 	 	 	while(temp){
	 	 	 	 	mp[temp % 10]++;
	 	 	 	 	temp = temp / 10;
	 	 	 	}
	 	 	}
	 	}
	 	for(int i = 0; i <= 9; i++){
	 	 	if(i > 0) printf(" ");
	 	 	printf("%d", mp[i]);
	 	}
	 	printf("\n");
	 	mp.clear();
	}
 	return 0;
}