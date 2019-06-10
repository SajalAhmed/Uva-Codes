#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt", "r", stdin);

	float h, u, d, f, cnt = 0;	
	float dc, hc, hs;
	while(scanf("%f %f %f %f", &h, &u, &d, &f), (h||0)){
		cnt = 0;
		dc = hc = hs = 0;

		while(1){
		 	if(cnt == 0){
		 	 	dc = hc = u; 
		 	 	hs = hc - d;
		 	 	// break;
		 	}
		 	else{
		 	 	if(dc > 0 ) dc =  (f / 100) * u;
		 	 	hc = hs + dc;
		 	 	hs = hc - d;
		 	 	
		 	 	
		 	}
		 	cnt++;
		 	if(hc > h){
		 		printf("success on day %d\n", (int)cnt); 	
		 		break;
		 	}
		 	if(hc < 0 || hs < 0){
		 	 	printf("failure on day %d\n", (int)cnt);
		 	 	break;
		 	}	
		 	
		}
	}
                   

return 0;
}