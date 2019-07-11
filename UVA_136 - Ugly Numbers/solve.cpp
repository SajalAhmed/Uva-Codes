#include <bits/stdc++.h> 
using namespace std;  
typedef long long int ll;
int main() { 
	set<int> s;
	s.insert(1);
	set<int>::iterator it = s.begin();
	while(1){
		s.insert((*it) * 2);
	 	s.insert((*it) * 3);
	 	s.insert((*it) * 5);
	 	it++;
	 	if(s.size() > 1600) break;
	}
	vector<int> v(s.begin(), s.end());
	printf("The 1500'th ugly number is %d.\n", v[1499]);
	  
    return 0;
} 

