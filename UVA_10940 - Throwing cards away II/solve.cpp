#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[500001], n, temp = 2;
	arr[1] = 1;
	for(int i = 2; i < 500000 * 2; i *= 2){
	 	for(int j = 2; j <= i; j+= 2){
	 	   arr[temp++] = j; 
	 	   if(temp > 500000) break;
	 	}
	}
	while(scanf("%d", &n), (n|0)){
	 	printf("%d\n", arr[n]);
	}
 	return 0 ;
}