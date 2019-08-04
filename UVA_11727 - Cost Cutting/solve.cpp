#include <bits/stdc++.h>
using namespace std;
int main(){
 	int a, b, c, t, t1, t2;
 	scanf("%d", &t);
 	for(int i = 1; i <= t; i++){
 	 	scanf("%d%d%d", &a, &b, &c);
 	 	t1 = min(a, b);
 	 	t2 = min(b, c);
 	 	printf("Case %d: %d\n",i, t1==t2 ? min(a, c) : max(t1, t2));
 	}
 	return 0;
}