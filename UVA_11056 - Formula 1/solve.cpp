#include <bits/stdc++.h>
using namespace std;
struct cType{
	string str;
 	int m_, s_, ms;
} st;

bool cmp(cType a, cType b){
 	if(a.m_ != b.m_){
 	 	return a.m_ < b.m_;
 	}
 	else if(a.s_ != b.s_){
 	 	return a.s_ < b.s_;
 	}
 	else if(a.ms != b.ms){
 	 	return a.ms < b.ms;
 	}
 	transform(a.str.begin(), a.str.end(), a.str.begin(), ::tolower);
 	transform(b.str.begin(), b.str.end(), b.str.begin(), ::tolower);
 	return a.str < b.str;
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string temp;
	int n, min_ , sec_ , ms_, cnt = 1;
	vector<cType> v;
	while(scanf("%d", &n) != EOF){
	 	for(int i = 0; i < n; i++){
	 		cin>> temp;
	 	 	scanf("%*s%d min %d sec %d ms", &min_, &sec_, &ms_);
	 	 	st.str = temp;
	 	 	st.m_ = min_;
	 	 	st.s_ = sec_;
	 	 	st.ms = ms_;
	 	 	v.push_back(st);
	 	}
	 	sort(v.begin(), v.end(), cmp);
	 	for(int i = 0; i < n; i++){
	 	 	if(i  % 2 == 0){
	 	 	 	printf("Row %d\n", cnt++);
	 	 	}
	 	 	cout<< v[i].str<<endl;
	 	}
	 	printf("\n");
	 	v.clear();
	 	cnt = 1;
	}
return 0;
}