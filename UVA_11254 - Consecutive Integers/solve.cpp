#include <bits/stdc++.h>
using namespace std;
int main(){
    int Sn, Sn1, a, n;
    while(scanf("%d", &Sn)){
     	if(Sn < 0) break;
     	for(int n = sqrt(2 * Sn); n >= 1; n--){
     	 	a = ((2 * Sn + n) - (n * n)) / (2 * n);
     	 	Sn1 = (n * ((n - 1) + a * 2)) / 2;
     	 	if(Sn1 == Sn){
     	 	 	printf("%d = %d + ... + %d\n", Sn, a, (a - 1) + n);
     	 	 	break;
     	 	}
     	}  
    }
 	return 0;
}