#include <bits/stdc++.h> 
#define MAX 2000000000
using namespace std;  
typedef long long int ll;
int main() { 
	int n, temp;
	set<ll> s;
	s.insert(1);
	set<ll>::iterator it = s.begin();
	while(1){
		s.insert((*it) * 2);
	 	s.insert((*it) * 3);
	 	s.insert((*it) * 5);
	 	s.insert((*it) * 7);
	 	it++;
	 	if((*it) * 2 >= MAX) break;
	}
	vector<ll> v(s.begin(), s.end());
	
    while(scanf("%d", &n), (n|0)){
	 	temp = n % 100;
	 	if(temp % 10 == 1 && temp != 11){
	 	  printf("The %dst humble number is %lld.\n",n, v[n-1]);
	 	}
	 	else if(temp % 10 == 2 && temp != 12){
	 	   printf("The %dnd humble number is %lld.\n",n, v[n-1]);
	 	}
	 	else if(temp % 10 == 3 && temp != 13){
	 	  printf("The %drd humble number is %lld.\n",n, v[n-1]);
        }
	 	else{
	 	   printf("The %dth humble number is %lld.\n",n, v[n-1]);
    	}
    }  
    return 0;
} 

