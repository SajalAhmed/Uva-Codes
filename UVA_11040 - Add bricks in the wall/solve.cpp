#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	int t;
	scanf("%d", &t);
	while(t--){
		int arr[10][10] = {0};
		int temp[10][10] = {0};

		for(int i = 1; i <= 9; i += 2){
		 	for(int j = 0; j < (i / 2) + 1; j++){
		 	 	scanf("%d", &arr[i][j]);
		 	}
		}
		for(int i = 1; i <= 9; i++){
			if(i % 2 == 1){
		 		for(int j = 0, l = 1; j < (i / 2) + 1; j++){
		 	    	if(j == 0)
		 	     		temp[i][j] = arr[i][j];
		 	 		else{
		 	 	  		temp[i][l++] = (arr[i - 2][j - 1] - (arr[i][j - 1] + arr[i][j])) / 2;
		 	 	  		temp[i][l++] = arr[i][j];
		 	 		 }
		 		}
		 	}
		}
		for(int i = 1; i <= 9; i++){
			if(i % 2 == 1)
		    for(int j = 0; j < i; j++){
		    	if( j > 0) printf(" ");
		     	printf("%d", temp[i][j]);
		    }
		    else
		    for(int j = 0; j < i; j++){
		    	if(j > 0) printf(" ");
		    	printf("%d", temp[i + 1][j] + temp[i + 1][j + 1]);
		    }
		    printf("\n");
		}	
	}
	 	
}