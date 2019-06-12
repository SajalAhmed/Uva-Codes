#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[13] = { 1, 1, 1, 1, 2, 2, 2, 3, 3, 3};
	int b[13] = { 0, 1, 2, 3, 1, 2, 3, 1, 2, 3};
	int L, R, n = 0, cnt = 1; 
	string str;
	
	while(getline(cin, str)){

		int arr[5][5] = {0};

		for(int l = 0; l < str.size();l++){

			n = str[l] - 'a';

			L = a[n + 1];
			R = b[n + 1];
            
			arr[L][R]++;
			arr[L][R] %= 10;
             
			arr[L + 1][R]++;
			arr[L + 1][R] %= 10;
               
			arr[L - 1][R]++;
			arr[L - 1][R] %= 10;

            arr[L][R + 1]++;
            arr[L][R + 1] %= 10;

			arr[L][R - 1]++;
			arr[L][R - 1] %= 10;
		}	
		printf("Case #%d:\n", cnt++);
	   	for(int i = 1; i <= 3; i++){
	   	   for(int j = 1; j <= 3; j++){
	   	    	if(j > 1) printf(" ");
	   	    	printf("%d", arr[i][j]);
	   	   }
	   	   printf("\n");
	   	}
	}
return 0;
}