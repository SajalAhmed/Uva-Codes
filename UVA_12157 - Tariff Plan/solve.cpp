#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	            
	int n, m, mile, juice, temp, i = 1;
	scanf("%d", &n);
	while(n--){
	 	scanf("%d", &m);
	 	juice = 0;
	 	mile = 0;
	 	while(m--){
	 	 	scanf("%d", &temp);
	 	 	if(temp <= 59){
	 	 	 	juice++;
	 	 	}
	 	 	else {
	 	 		juice += (temp / 60) + 1;	
	 	 	}
	 	 	if(temp <= 29){
	 	 	 	mile++;
	 		}
	 		else {
	 		 	 mile += (temp / 30) + 1;
	 		}
	 	 	 
	 	}
	 	mile *= 10;
	 	juice *= 15;
		if((mile == juice) && mile != 0){
		 	printf("Case %d: Mile Juice %d\n",i++, mile);
		}
		else if (mile < juice && mile !=0){
		 	printf("Case %d: Mile %d\n", i++, mile);
		}
		else {
		 	printf("Case %d: Juice %d\n", i++, juice);
		}
	}
  
return 0;
}