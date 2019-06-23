#include <bits/stdc++.h>
#define MAX_N 81
using namespace std;
string P, T;
int b[MAX_N];
void kmpPreprocess(int m){
    int j = -1; b[0] = -1;
    for(int i = 0; i < m; i++){
        while (j >= 0 && P[i] != P[j])
            j = b[j];
        j++;
        b[i+1] = j;
    } 
}

int kmpSearch(int n, int m){
    int j = 0, cnt = -1, match = 0;
    for(int i = 0; i < n; i++){
        while (j >= 0 && T[i] != P[j])
           j = b[j];
        j++; 
        if(j == m){
        	if(cnt < 0) {
        	 	cnt = (i + 1) - j;
        	 	match++;
        	}
        	else if(cnt + m <= (i+1) - j){
        	    cnt = (i+1) - j;
        	    match++;
        	}
            j = b[j];
        }
    }
    return match;
}
int main(){
	int t, n, m, temp;
	scanf("%d", &t);
	for(int k = 0; k < t; k++){
		if(k > 0) printf("\n");
	 	cin>> T;
	 	n = T.size();
	 	temp = 0;
	 	for(int i = 1; i <= n / 2; i++){
	 	 	 P = T.substr(0, i);
	 	 	 m = P.size();
	 	 	 memset(b, 0, m);
	 	 	 kmpPreprocess(m);
	 	 	 temp = kmpSearch(n, m);
	 	 	 if((m * temp) == n && (n % temp) == 0){
	 	 	    printf("%d\n", m);
	 	 	    temp = -1;
	 	 	    break;
	 	 	 }
	 	}
	 	if(temp >= 0) printf("%d\n", n);
	}
 return 0;
}