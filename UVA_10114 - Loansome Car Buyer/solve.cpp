#include <bits/stdc++.h>
using namespace std;
struct Month{
  	float dep;
  	bool flag;
  	Month(){
  	 	flag = false;
  	}
};
int main(){
//freopen("input.txt", "r", stdin);

	int l_time, b, temp;
	float d_payment, loan, pay_per_month, car_worth, temp1;
	
	while(scanf("%d%f%f%d", &l_time, &d_payment, &loan, &b)){
		Month m[101];
		pay_per_month = float(loan / l_time);
		car_worth = float(loan + d_payment);

	 	if(l_time < 0) return 0;

	 	for(int i=1;i<=b;i++){
	 	 	scanf("%d%f", &temp, &temp1);
	 	 	m[temp].dep = temp1;
	 	 	m[temp].flag = true;
	 	}
	 	for(int i = 0;i <= l_time;i++){
	 		if(m[i].flag){
	 			if(i == 0 ){
	 			 	car_worth *= 1.0 - m[i].dep;
	 			}
	 			else {
	 				car_worth *= 1.0 - m[i].dep;
	 				loan -= pay_per_month;
	 			 	
	 			}
	 		}
	 		else {
	 		 	m[i].dep = m[i-1].dep;
	 		 	car_worth *= 1.0 - m[i].dep;
	 		 	loan -= pay_per_month;
	 		}
	 		if( car_worth > loan){
	 		 	if( i > 1 || i == 0) printf("%d months\n", i);
	 		 	else printf("%d month\n", i);
	 		 	break;
	 		}
	 	}

	}


return 0;
}