#include <bits/stdc++.h>
#define MAX_N 1000001
using namespace std;
string P;
int b[MAX_N];
int kmpPreprocess(int m){
    int j = -1; b[0] = -1;
    for(int i = 0; i < m; i++){
        while (j >= 0 && P[i] != P[j])
            j = b[j];
        j++;
        b[i+1] = j;
    } 
    return m / (m - j);
}

int main(){
	int m;
	while(cin>>P){
	 	if(P == ".") break;
	 	m = P.size();
	 	printf("%d\n", kmpPreprocess(m));
	}
 return 0;
}