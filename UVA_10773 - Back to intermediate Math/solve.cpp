#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, cnt = 1;
	float d, s1, s2, t1, t2;
	scanf("%d", &t);
	while(t--){
	 	scanf("%f%f%f", &d, &s1, &s2);
	 	if(s1 >= s2) printf("Case %d: can't determine\n", cnt++);
	 	else{
	 	 	t1 = d / s2;
	 	 	t2 = d / sqrt((s2*s2) - (s1 * s1));
	 	 	if(t2 <= t1) printf("Case %d: can't determine\n", cnt++);
	 	 	else printf("Case %d: %.3f\n", cnt++, t2 - t1);	
	 	}

	}

return 0;
}