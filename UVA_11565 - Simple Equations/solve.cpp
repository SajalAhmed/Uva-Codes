#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int n, a, b, c, k, flag;
	scanf("%d", &n);
	while(n--){
	 	scanf("%d%d%d", &a, &b, &c); //i = x, j = y, t = z
	 	flag = 0;
	 	for(int i=-99;i<100;i++){
	 	 	for(int j = i+1;j<=100;j++){
	 	 	 	k = a - (i + j);
	 	 	 	if((i + j + k) == a && (i * j * k) == b && (i*i + j*j + k*k) == c & i < j < k){
	 	 	 	 	printf("%d %d %d\n", i, j, k);
	 	 	 	 	flag = 1;
	 	 	 	 	goto hell;
	 	 	 	}
	 	 	}
	 	}
	 	hell:
	 	if(!flag) printf("No solution.\n");
	}

return 0;
}