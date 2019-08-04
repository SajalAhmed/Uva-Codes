#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int main(){
	int temp, a, b, arr[MAX] = {0};
 	for(int i = 1; i < MAX; i++){
 	 	temp = sqrt(i);
 	 	if((temp * temp) == i){
 	 	 	arr[i] = arr[i-1] + 1;
 	 	}
 	 	else arr[i] = arr[i - 1];
 	}
 	while(scanf("%d%d", &a, &b), (a|b)){
 	 	printf("%d\n", arr[b] - arr[a - 1]);
    }
    return 0;
}