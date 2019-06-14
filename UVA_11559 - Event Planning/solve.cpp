#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int person, budget, hotel, weeks, p_price, w_free, temp = 0;
	while(scanf("%d %d %d %d", &person, &budget, &hotel, &weeks) != EOF){
		temp = 500001;
	     for(int i = 1;i <= hotel; i++){
	      	scanf("%d", &p_price);

	      	    for(int j = 1;j <= weeks;j++){
	      	     	scanf("%d", &w_free);
	      	     	
	      	     	if(w_free >= person && p_price * person <= budget){
	      	     		if(temp > person * p_price)
	      	     		 	temp = person * p_price;
	      	     	}
	      	    }
	      }
		  if(temp == 500001){
	      	 	printf("stay home\n");
	      }
	      else printf("%d\n", temp);
	}

return 0;
}