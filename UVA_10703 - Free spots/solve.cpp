#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

	int w, h, n, x1, x2, y1, y2, sum = 0;

	while(scanf("%d %d %d",&w, &h, &n), (w|h)){
		int arr[h+1][w+1] = {0};
		sum = 0;
	 	for(int l = 0; l < n; l++){
	 	 	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	 	 	for(int i = min(y1, y2); i <= max(y1,y2); i++){
	 	 	 	for(int j = min(x1, x2); j <= max(x1, x2); j++){
	 	 	 	 	arr[i][j] = 1;
	 	 	 	}
	 	 	}
	 	}
	 	for(int i = 1; i <= h; i++){
	 	 	for(int j = 1; j <= w; j++){
	 	 	 	if(arr[i][j] == 0) sum++;
	 	 	}
	 	}
	 	if(sum == 0){
	 	 	printf("There is no empty spots.\n");
	 	}
	 	else if(sum == 1){
	 	 	printf("There is one empty spot.\n");
	 	}
	 	else{
	 	 	printf("There are %d empty spots.\n", sum);
	 	}
	}

return 0 ;
}