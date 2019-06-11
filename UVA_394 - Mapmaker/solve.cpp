#include <bits/stdc++.h>
//#define LOCAL_DEFINE 1
using namespace std;
struct cType{
	int baseNumber;
	int bytes;
  	int dimension;
  	int upperBound[11];
  	int lowerBound[11];

};

int main(){
#ifdef LOCAL_DEFINE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 	int n, m, e, l, temp;
 	map<string, cType> v;
 	vector<pair <int , int> > p;
	char str[10];
 	scanf("%d %d", &n, &m);
 	for(int i = 1; i <= n; i++){
 		cType c;
 	 	scanf("%s %d %d %d",str, &c.baseNumber, &c.bytes, &c.dimension);
 	 	for(int j = 0; j < c.dimension; j++){
 	 	 	scanf("%d %d", &c.lowerBound[j], &c.upperBound[j]);
 	 	}
 	 	v[str] = c;
 	}
 	for(int i = 1; i <= m; i++){
 	 	scanf("%s", str);
		printf("%s[", str);

 	 	for(int j = 0; j < v[str].dimension; j++){
 	 	 	scanf("%d", &temp);
 	 	 	e = temp - v[str].lowerBound[j];
 	 	 	l = v[str].upperBound[j] - v[str].lowerBound[j] + 1;
 	 	 	p.push_back(make_pair(l, e));

 	 	 	if(j == 0) 
 	 	 		printf("%d", temp);
 	 	 	else 
 	 	 		printf(", %d", temp);
 	 	}
 	 	printf("] = ");

 	 	temp = 0;
 	 	for(int j = 0;j < v[str].dimension; j++){
 	 	     temp = temp * p[j].first + p[j].second;
 	 	}
 	 	printf("%d\n", v[str].baseNumber + (v[str].bytes * temp));
 	 	p.clear();
 	}


return 0;
}
