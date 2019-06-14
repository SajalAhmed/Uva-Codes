#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt", "r", stdin);
freopen("out.txt", "w", stdout);
 	int n, m, sum = 0, temp, mxn, input;
 	//vector<int> v;
 	while(scanf("%d", &n), (n||0)){
 		scanf("%d", &m);
 		scanf("%d", &input);
 		sum = n - input;
 		mxn = temp = input;


 	 	for(int i=1;i<m;i++){
 	 	 	scanf("%d", &input);
 	 	 	if(mxn < input){
 	 	 	 	mxn = input;
 	 	 	}
 	 	 	if(temp > input){
 	 	 	 	sum += temp - input;
 	 	 	}
 	 	 	temp = input;
 	 	}

 	 	/*
 	 	sum = n - v[0];
 	 	mxn = v[0];
 	 	for(int i=1;i<v.size();i++){
 	 		if(mxn < v[i]){
 	 		  mxn = v[i];
 	 		}
 	 		if(v[i-1] > v[i]){
 	 			sum += (v[i-1] - v[i]); 
 	 		}
 	 	 	
 	 	} */
 	   printf("%d\n", sum);
 	 //  v.clear();
 	} 
}