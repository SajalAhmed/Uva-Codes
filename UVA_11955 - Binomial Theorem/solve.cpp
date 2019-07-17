#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n, t, temp;
	ll arr[51][52];
	char str[100], str1[100];
	for(int i = 1; i <= 50; i++){
		arr[i][0] = arr[i][i] = 1;
	 	for(int j = 1; j < i; j++){
	 	 	arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
	 	}
	}
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
	 	scanf(" %*c%[a-z]%*c%[a-z]%*c%*c%d", str, str1, &n);
	 	temp = n;
	 	printf("Case %d: ", i);
	 	for(int i = 0;i <= n; i++){
	 		if(i > 0 ) printf("+");
	 		if(arr[n][i] > 1) printf("%lld*", arr[n][i]);
	 		if(i < n) printf("%s", str);
	 		if(temp > 1) printf("^%d", temp);
	 		if(i > 0 && temp > 0) printf("*");
	 		if(i > 0) printf("%s", str1);
	 		if(i > 1) printf("^%d", i);
	 	 	temp--;	
	 	}
	 	printf("\n");
	}   
	return 0;
}