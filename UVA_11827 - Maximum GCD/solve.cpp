#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	vector<int> v;
	int t, d, ans, temp;
	scanf("%d", &t);
	getchar();
	while(t--){
		getline(cin, str);
		d = -1;
		temp = ans = 0;
		temp = str.size();
		for(int i = 0;i < temp; i++){
			if(str[i] >= '0' && str[i] <= '9'){
				if(d < 0) d = str[i] - '0';
			 	else d = (d *  10) + (str[i] - '0');	
			}
			if(str[i] == ' '){
			 	if(d >= 0) v.push_back(d);
			 	d = -1;
			}
	  	}
	  	if(d >= 0) v.push_back(d);
	  	d = v.size();
	 	for(int i = 0;i < d - 1; i++){
	 		for(int j = i + 1; j < d; j++){
	 		 	temp = __gcd(v[i], v[j]);
	 		 	if(temp > ans) ans = temp;
	 		}
	 	}
	 	printf("%d\n", ans);
	 	v.clear();
	}
return 0;
}