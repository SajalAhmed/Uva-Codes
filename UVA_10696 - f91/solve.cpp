#include <bits/stdc++.h>
using namespace std;
//#define LOCAL_DEFINE 1
int f19(int n){
 	if(n >= 101){
        return n - 10;
    }	
     return f19(f19(n + 11));
}
int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif
	int n;
	while(scanf("%d", &n), (n||0)){
	 	printf("f91(%d) = %d\n",n, f19(n));	
	}

#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

#endif
    return 0;
}