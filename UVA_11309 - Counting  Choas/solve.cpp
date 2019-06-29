#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	int a, b, t, temp;
	scanf("%d", &t);
	while(t--){
	 	scanf("%d%*c%d", &a, &b);
	 	temp = (a * 100) + b + 1;
	 	if(temp < 10){
	 		 printf("00:%02d\n", temp);
	 	}
	 	else if(temp > 2332){
	 	 	printf("00:00\n");
	 	}
	 	else if(temp < 56){
	 		while(1){
	 			if(temp % 10 == temp / 10){
	 		 		printf("00:%d\n",temp); 
	 		 		break;
	 			}
	 			temp++;
	 		}
	 	}
	 	else if(temp < 960){
	 		if(temp / 100 == 0) temp = 101;
	 	 	while(1){
	 	 	 	if(temp % 100 == 60) temp += 40;
	 	 	 	if(temp / 100 == temp % 10){
	 	 	 	 	printf("%02d:%02d\n", temp / 100, temp % 100);
	 	 	 	 	break;
	 	 	 	}
	 	 	 	temp++;
	 	 	}
	 	}
	 	else{
	 	 	if(temp / 1000 == 0) temp == 1001;
	 	 	while(1){
	 	 	 	a = (((temp / 100) % 10) * 10) + ((temp / 100) / 10);
	 	 	 	if(a > 60 || a < temp % 100){
	 	 	 	 	temp = (100 -  (temp % 100)) + temp;
	 	 	 	}
	 	 	 	if(a < 60 && a == temp % 100){
	 	 	 	 	printf("%02d:%02d\n", temp / 100, temp % 100);
	 	 	 	 	break;
	 	 	 	}
	 	 	 	temp++;
	 	 	}
	 	}	
	}
return 0;
}