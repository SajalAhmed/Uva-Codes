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
int kmpSearch(int n, int m){
	int j = 0;
	for(int i = 0; i < n; i++){
		while (j >= 0 && T[i] != P[j]){
			j = b[j];
		}
		j++; 
		if(m == j) break;
	}
	return j;
}

int main(){
//freopen("input.txt", "r", stdin);
 	int t, m, n, temp;
 	scanf("%d", &t);
 	while(t--){
 	    scanf("%*d%d", &m);
 	    cin>>T;
 	    n = T.size();
 	    for(int i =  1; i < m; i++){
 	       cin>>P;
 	       kmpPreprocess(n);
 	       temp = kmpSearch(T.size(), n);
 	       T += P.substr(temp, n);
 	    }
 	    cout<<T.size()<<endl;
 	}
}