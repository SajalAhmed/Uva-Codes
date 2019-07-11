#include <bits/stdc++.h>
using namespace std;
struct cType{
  	int a, b; 
  	float c;
} arr;

bool cmp(cType a, cType b){
 	if(a.c < b.c) return true;
 	else return false;
}
int main(){
 	int n, m;
 	float temp;
 	vector<cType> v;
 	while(scanf("%d%d", &n, &m) != EOF){
 	 	for(float i = 1; i < n; i++){
 	 	 	for(float j = 1; j <= n; j++){
 	 	 	   temp = i / j;
 	 	 	   if(temp <= 1.0){
 	 	 	   	if(__gcd((int)i, (int)j) == 1){
 	 	 	    	arr.a = i;
 	 	 	    	arr.b = j;
 	 	 	    	arr.c = temp;
 	 	 	    	v.push_back(arr);
 	 	 	    }	
 	 	 	   }
 	 	 	}
 	 	}
 	 	sort(v.begin(), v.end(), cmp);
 	 	printf("%d/%d\n", v[m-1].a, v[m-1].b);
 	 	v.clear();
 	}
return 0;
}