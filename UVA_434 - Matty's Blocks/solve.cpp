#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);

	int s1, s2, n, t, w[100], v[100];
	bool arr[100];
	bool flag;

	scanf("%d", &t);
	while(t--){
		 s1 = s2 = 0;
		 flag = true;

		scanf("%d", &n);

		for(int i = 0; i < n; i++){
		 	scanf("%d", &v[i]);
		 	s1 += v[i];
		}
		for(int i = 0; i < n;i++){
		   scanf("%d", &w[i]);
		   arr[i] =  true;
		}

		for(int i = 0; i < n; i++){
		 	for(int j = 0; j < n; j++){
		 	 	s2 += min(w[i], v[j]);
		 	 	if((w[i] == v[j]) && arr[j] && flag){
		 	 	 	arr[j] = false;
		 	 	 	flag = false;
		 	 	}
		 	}
		 	if(flag){
		 		s1 += w[i];
		 	}
		 	else flag = true;
		}
	 	
	 	printf("Matty needs at least %d blocks, and can add at most %d extra blocks.\n", s1, s2 - s1);
	}

return 0;
}