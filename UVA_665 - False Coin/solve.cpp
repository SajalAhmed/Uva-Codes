#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define UNIQUE(c) c.resize(unique(all(c)) - c.begin())
//#define LOCAL_DEFINE 1
      
int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif  
 	vector<int> v, coin, exactCoin;
 	int t, n, k, k2, temp;
 	char c;
 	scanf("%d", &t);
 	for(int i = 1;i <= t;i++){
 	   if(i > 1) printf("\n");

 	   scanf("%d%d", &n, &k);
 	   for(int l = 1;l <= n;l++) 
 	   	coin.push_back(l);

 	   for(int j = 1;j <= k;j++){
		  scanf("%d", &k2);
		  for(int l = 1;l <= k2*2;l++){
		     scanf("%d", &temp);
		     v.push_back(temp);
		  }
		  getchar();
		  scanf("%c", &c);
		
		  if(c == '='){
		  	for(int l = 0;l < k2*2;l++){
		  	 	exactCoin.push_back(v[l]);
		  	}
		  } 
		  v.clear();
 	   }
 	   sort(all(exactCoin));
 	   UNIQUE(exactCoin);

 	   set_difference(coin.begin(), coin.end(), exactCoin.begin(), exactCoin.end(), inserter(v, v.begin()));

 	   if(v.size() == 1){
 	    	printf("%d\n", v[0]);
 	   }
 	   else{
 	    	printf("0\n");
 	   }
 	   exactCoin.clear();
 	   v.clear();
 	   coin.clear();
 	   
	}
return 0;  
}