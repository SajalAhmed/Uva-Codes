#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, temp, cnt = 1;
	while(scanf("%d%d", &n ,&m) , (n | m)){
		if((m * 26) + m < n)
	       	printf("Case %d: impossible\n", cnt++);
	    else if(n % m == 0)
	    	printf("Case %d: %d\n", cnt++, (n / m) - 1);
	    else
	    	printf("Case %d: %d\n",cnt++, n / m);
	}
	return 0;
}