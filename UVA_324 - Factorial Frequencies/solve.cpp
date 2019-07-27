#include <bits/stdc++.h>
#define M 789
#define L 367
using namespace std;
int arr[L][M], t[10];
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
	int n, i;
	while(scanf("%d", &n), (n|0)){
		memset(t, 0, sizeof t);
	 	for(i = M - 1; i > 0; i--){
	 	    if(arr[n][i] != 0){
	 	     	break;
	 	    }
	 	}
	 	printf("%d! --\n", n);
	 	for(int j = i; j >= 0; j--){
	 	 	t[arr[n][j]]++;
	 	}
	 	printf("   (0) %3d (1) %3d (2) %3d (3) %3d (4) %3d\n", t[0], t[1], t[2], t[3], t[4]);
	 	printf("   (5) %3d (6) %3d (7) %3d (8) %3d (9) %3d\n", t[5], t[6], t[7], t[8], t[9]);
	}
	return 0;
}	