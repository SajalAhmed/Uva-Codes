#include <bits/stdc++.h> 
using namespace std; 

vector<string> split(string str, char delimiter) {   //istringstream vs stringstream
  	vector<string> internal;
  	stringstream ss(str); 
  	string word;
 
  	while(getline(ss, word, delimiter)) {
		internal.push_back(word);
  	}
 
return internal;
}



// Driver function 
int main() { 
//	freopen("input.txt", "r", stdin); 
//	freopen("out.txt", "w", stdout);
	string str[101];
	vector<string> s = split("Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you", ' '); 
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
	 	cin>>str[i];
	}
	int flag = 0;
	
	if(n <= 16)
	for(int i = 0;i < s.size();i++){
		for(int j = 0;j < n;j++, i++){  
			if(i==s.size()) break;
		 	cout<<str[j]<<": "<<s[i]<<endl;
		}
		i--;
	}   
	else 
	for(int i = 0;i < n ; i++){
	 	for(int j = 0;j< s.size(); j++, i++){
	 		if(i == n){
	 		 	i = 0;
	 		 	flag = 1;
	 		}
	 	 	cout<<str[i]<<": "<<s[j]<<endl;
	 	}
	 	i--;
	 	if(flag) break;
	}     

	return 0; 
} 
