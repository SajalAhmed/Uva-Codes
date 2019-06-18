#include <bits/stdc++.h>
#define MAX_N 1000001
using namespace std;
char T[MAX_N], P[MAX_N];
int b[MAX_N];
void reverseStr(){ 
    int n = strlen(P); 
    for (int i = 0; i < n / 2; i++) 
        swap(P[i], P[n - i - 1]); 
}
void kmpPreprocess(int m){
	int j = -1; b[0] = -1;
	for(int i = 0; i < m; i++){
		while (j >= 0 && P[i] != P[j]){
			j = b[j];
		}
		j++;
		b[i+1] = j;
	} 
} 
int kmpSearch(int n){
	int j = 0, max_ = 0;
	for(int i = 0; i < n; i++){
		while (j >= 0 && P[i] != T[j]){
			j = b[j];
		}
		j++; 
		max_ = max(j , max_);
	}
	return max_;
}

int main(){
//freopen("input.txt", "r", stdin);
 	int t, v, n;
 	scanf("%d", &t);
 	while(t--){
 	 	scanf("%s", &T);
 	 	strcpy(P, T);
		reverseStr();
 	 	n = strlen(T);
 	 	memset(b, 0, n);
 	 	kmpPreprocess(n);
 	 	v = kmpSearch(n) - 1;
 	 	for(int i = v; i >=  0; i--){
 	 	 	printf("%c", T[i]);
 	 	}
 	 	printf("\n");

 	}
}