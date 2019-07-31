#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod_ = 131071;
ll power(ll x, ll y, ll n) { 
   ll res = 1;
   x = x % n; 
   while (y > 0) { 
      if (y & 1) res = (res*x) % n; 
      y = y>>1;  
      x = (x*x) % n; 
   } 
   return res; 
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char ch;
	string str;
	ll temp, ans, cnt = 0, index;
 	while((ch = getchar()) != EOF){
 		if(ch == '#'){
 			ans = index = 0;
 			for(ll i = cnt - 1; i >= 0; i--){
 		   		if(str[i] == '1'){
 		    		ans += power(2, index, mod_);
 		   		}
 		   		index++;
 	 		}
 	    	if(ans % mod_) printf("NO\n");
 	    	else printf("YES\n");
 	    	cnt = 0;
 	    	str.clear();
 	    }
 	    else if(ch == '0' || ch == '1'){
 	    	str += ch;	
 	    	cnt++;
 	    }
 	} 
 	return 0;
}