#include <bits/stdc++.h>
using namespace std;
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, t1, t2, v1, v2, temp;
	int row[101], col[101];
	while(scanf("%d", &n) , (n|0)){
		t1 = t2 = 0;
		for(int i = 0; i < n; i++)
		 	row[i] = col[i] = 0;
		
		for(int i = 0; i < n; i++){
		 	for(int j = 0; j < n; j++){
		 		scanf("%d", &temp);
		 	    row[i] += temp;
		 	    col[j] += temp;
		 	}	
		}
		for(int i = 0; i < n; i++){
		 	if(row[i] % 2 == 1){
		 	 	t1++;
		 	 	v1 = i;
		 	}
		 	if(col[i] % 2 == 1){
		 	 	t2++;
		 	 	v2 = i;
		 	}
		}
		if(t1 == 0 && t2 == 0){
		 	printf("OK\n");
		}
		else if(t1 == 1 && t2 == 1){
		 	printf("Change bit (%d,%d)\n", ++v1, ++v2);
		}
		else
			printf("Corrupt\n");
 	}
 return 0;
}