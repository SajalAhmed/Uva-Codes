#include <bits/stdc++.h> 
using namespace std; 
int sumOfdivisors(int n) {
	int sum = 0; 
	for (int i=1; i <= sqrt(n); i++) { 
		if (n % i == 0){ 
			sum += i;
			if(n / i != i)
				sum += (n / i);
		} 
	}
	return sum - n;  
} 

int main() { 
	int t, temp;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%d", &t), (t|0)){
	  temp = sumOfdivisors(t);
	  if(temp == t){
	     printf("%5d  PERFECT\n", t);
	  }
	  else if(temp <  t){
	    printf("%5d  DEFICIENT\n", t);
	  }
	  else{
	   	printf("%5d  ABUNDANT\n", t);
	  }
	}
	printf("END OF OUTPUT\n");
return 0; 
} 
