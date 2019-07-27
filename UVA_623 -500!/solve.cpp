#include <bits/stdc++.h>
#define M 2570
#define L 1001
using namespace std;
int arr[L][M];
void fac(){
 	arr[0][0] = arr[1][0] = 1;
 	for(int i = 2; i < L; i++){
 	 	for(int j = 0; j < M; j++){
 	 	 	arr[i][j] += arr[i - 1][j] * i;
 	 	 	if(arr[i][j] > 9){
 	 	 	 	arr[i][j+1] = arr[i][j] / 10;
 	 	 	 	arr[i][j] = arr[i][j] % 10;
 	 	 	}
 	 	}
 	}
}
int main(){
	fac();
	int i, n;
	while(scanf("%d", &n) != EOF){
	 	for(i = M - 1; i > 0; i--){
	 	    if(arr[n][i] != 0){
	 	     	break;
	 	    }
	 	}
	 	printf("%d!\n", n);
	 	for(int j = i; j >= 0; j--){
	 	 	printf("%d", arr[n][j]);
	 	}
	 	printf("\n");
	}
	return 0;
}	