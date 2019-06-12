#include <bits/stdc++.h>
//#define LOCAL_DEFINE 1
using namespace std;
int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif
	vector<int> v;
	int n, sum = 0, c = 0, temp, cnt = 1;
	while(scanf("%d", &n)){
		if(cnt > 1) printf("\n");
		sum = 0;
		c = 0;
	 	if(n == 0) break;
	 	for(int i = 0;i < n;i++){
	 	 	scanf("%d", &temp);
	 	 	sum += temp;
	 	 	v.push_back(temp);
	 	}
	 	sum = sum / n;
	 	temp = 0;
	 	//sort(v.rbegin(), v.rend());

	 	for(int i = 0;i < n;i++){
	 	 	if(sum < v[i]){
             	temp += v[i] - sum;
            }
	 	}
	 	printf("Set #%d\n", cnt++);
	 	printf("The minimum number of moves is %d.\n", temp);
	 	v.clear();
	}
return 0;	
}