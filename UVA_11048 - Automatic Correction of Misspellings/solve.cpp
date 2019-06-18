#include<bits/stdc++.h> 
using namespace std; 
int min(int x, int y, int z){ 
	return min(min(x, y), z); 
} 
//edit distance algorithm with DP 
int editDist(string s1, string s2, int m, int n){ 
	int dp[m+1][n+1]; 
	for (int i=0; i<=m; i++){ 
		for (int j=0; j<=n; j++){ 
			if (i==0) 
				dp[i][j] = j; 

			else if (j==0) 
				dp[i][j] = i; 

			else if (s1[i-1] == s2[j-1]) 
				dp[i][j] = dp[i-1][j-1]; 

			else
				dp[i][j] = 1 + min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]); 
		} 
	} 
	return dp[m][n]; 
} 

int main() { 
	int n, m, temp;
	string str, s1;
    vector<string> v;
    map<string, int> mp;

    scanf("%d", &n);
    v.resize(n);
    for(int i = 0; i < n; i++){
      cin>> v[i];
      mp[v[i]] = 1;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        cin>> str;
        if(mp[str]){
         	cout<<str<<" is correct"<<endl;
        }
        else{
	        for(int j = 0; j < n; j++){
	            temp = max(str.size(), v[j].size()) - min(str.size(), v[j].size());
	            if(temp > 1){
	                continue;
	            }
	            temp = editDist(str, v[j], str.size(), v[j].size());
	            if(temp == 1){
	                cout<<str<<" is a misspelling of "<<v[j]<<endl;
	                temp  = -1;
	                break;
	            }
	 	  	 	else if(temp == 2){
	 	  	 		s1 = str;
	                for(int k = 0; k < str.size() - 1; k++){
	                    swap(s1[k], s1[k + 1]);
	                    if(s1 == v[j]){
	                        cout<<str<<" is a misspelling of "<<v[j]<<endl;
	                        temp = -1;
	                        break;
	                    }
	                    s1 = str;
	                }
	                if(temp < 0) break;
	 	  	 	}
	        }
	 		if(temp > 0) cout<< str<< " is unknown"<<endl;
	 	}
   }
	return 0; 
} 
