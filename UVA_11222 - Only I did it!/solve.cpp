#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

	int Case, n, mxn = 0, temp, w[4][2];
	vector<int> v;
	scanf("%d", &Case);
	for(int t = 1; t <= Case; t++){

		int arr[4][1001], vxy[4][1001], str[10001];
		memset(str, 0, sizeof str);

		for(int j = 1; j <= 3; j++){
		 	scanf("%d", &w[j][0]);
		 	for(int i = 0; i < w[j][0]; i++){
		 	 	scanf("%d", &temp);
		 	 	v.push_back(temp);
		 	}
		 	sort(all(v));
		 	UNIQUE(v);
		 	n = v.size();

		 	for(int i = 0; i < n; i++){
		 	 	arr[j][i] = v[i];
		 	 	str[v[i]]++;
		 	}
		 	w[j][0] = n;
		 	v.clear();
		}
		mxn = 0;
		for(int j = 1; j <= 3; j++){
			temp = 0;
		 	for(int i = 0; i < w[j][0]; i++){
		 	 	if(str[arr[j][i]] == 1){
		 	 	 	vxy[j][temp++] = arr[j][i];
		 	 	}
		 	}
		 	w[j][1] = temp;
		 	if(temp > mxn) mxn = temp;

		}
		printf("Case #%d:\n",t);
		for(int j = 1;j <= 3; j++){
		 	if(w[j][1] == mxn){
		 	 	printf("%d %d", j, mxn);
		 	 	for(int i = 0; i < mxn; i++){
		 	 	 	printf(" %d", vxy[j][i]);
		 	 	}
		 	 	printf("\n");
		 	}
		}     
	}

return 0;
}