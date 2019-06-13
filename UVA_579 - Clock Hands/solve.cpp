#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	float hour, minute, temp;
	while(scanf("%f:%f", &hour, &minute), (hour||minute)){
	 	float a = (hour * 30 ) + (minute * 0.5); //1 hour == 30 degree
	 	temp = abs(minute * 6 - a);
	 	if(temp > 180.0){
	 	 	temp = 360 - temp;
	 	}
	 	printf("%.3f\n", (temp < 0 ? temp * -1 : temp));                                     
	}
return 0;
}