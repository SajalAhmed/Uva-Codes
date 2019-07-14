#include <bits/stdc++.h>
using namespace std;
int main(){
 	 int t;
 	 double avg, s1, s2;
 	 vector<double> v;
 	 while(scanf("%d", &t) , (t|0)){
 	  	v.resize(t);
 	  	avg = 0;
 	  	for(int i = 0;i < t; i++){
 	  	 	scanf("%lf", &v[i]);
 	  	 	avg += v[i];
 	  	}
 	  	avg = avg / t;
 	  	s1 = s2 = 0;
 	  	for(int i = 0;i < t; i++){
 	  	 	if(avg < v[i]){
 	  	 	 	s1 += (double) (long long) ((v[i] - avg) * 100.0) / 100.0;
 	  	 	}
 	  	 	else if(avg > v[i]){
 	  	 	 	s2 += (double) (long long) ((avg - v[i]) * 100.0) / 100.0;
 	  	 	}
 	  	}
 	  	printf("$%.2lf\n", max(s1, s2));
 	  	v.clear();
 	 }
return 0;
}