#include <bits/stdc++.h>
using namespace std;
int power(int x, int y, int n) { 
	int res = 1;
	x = x % n; 
	while (y > 0) { 
		if (y & 1) 
			res = (res*x) % n; 

		y = y>>1;  
		x = (x*x) % n; 
	} 
	return res; 
} 
int main() { 
	int t, x, y, n;
    scanf("%d", &t);
    while(t--){
     	scanf("%d %d %d", &x, &y, &n);
     	printf("%d\n", power(x, y, n));
	}
return 0;	
} 
