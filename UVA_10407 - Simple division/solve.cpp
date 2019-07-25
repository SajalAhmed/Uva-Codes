#include <bits/stdc++.h>
using namespace std;
int main(){
 	int n, temp = 0;
 	vector<int> v;
 	while(scanf("%d", &n), (n|0)){
 		v.push_back(n);
 	 	while(scanf("%d", &n), (n|0)){
 	 	 	v.push_back(n);
 	 	}
 	 	sort(v.begin(), v.end());
 	 	for(int i = 0; i < v.size() - 1; i++){
 	 		n = abs(v[i+1] - v[i]);
 	 	 	temp = __gcd(temp , n);
 	 	}
 	 	printf("%d\n", temp);

 	 	temp = 0;
 	 	v.clear();
 	}
 	return 0;
}