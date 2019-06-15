#include <bits/stdc++.h>
using namespace std;
#define LOCAL_DEFINE 1

int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, mxn, arr[102][102];
    mxn = -125;
    scanf("%d", &n);
    	
    for(int i = 1;i <= n;i++){
     	for(int j = 1;j <= n;j++){
     	 	scanf("%d", &arr[i][j]);
     	 	arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
     	}
    }
    for(int l = n; l > 0;l--){
     	for(int s = n;s > 0;s--){
     		for(int row = l - 1;row >= 0;row--){
     			for(int col = 0; col < s;col++){
     	 	 	 	mxn = max(mxn, arr[l][s] - arr[l][col] - arr[row][s] + arr[row][col]);
     	 	 	}
     	    }
     	}
    }
    printf("%d\n", mxn);
#ifdef LOCAL_DEFINE

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

#endif

return 0;
}	