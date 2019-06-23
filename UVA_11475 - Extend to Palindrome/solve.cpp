#include <bits/stdc++.h>
#define MAX_N 1000001
using namespace std;
string T, P;
int b[MAX_N];
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
	int j = 0;
	for(int i = 0; i < n; i++){
		while (j >= 0 && T[i] != P[j]){
			j = b[j];
		}
		j++; 
	}
	return j;
}

int main(){
//freopen("input.txt", "r", stdin);
 	int t, v, n;
 	while(cin>> T){
 	  P = T;
 	  n = P.size();
 	  reverse(P.begin(), P.end());
 	  kmpPreprocess(n);	
 	  for(int i = kmpSearch(n);i < n; i++){
 	   	T += P[i];
 	  }
 	  cout<<T<<endl;
 	}
}
