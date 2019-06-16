#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
	string str, temp = "";
	int t, n;
	int fib[46], arr[101];

	fib[0] = 1;
	fib[1] = 1;

	for(int i = 2; i <= 45; i++){
	 	fib[i] = fib[i - 1] + fib[i - 2];
	}
	scanf("%d", &t);
	while(t--){
		
		scanf("%d", &n);
		for(int i = 1; i <= n; i++)
		 	scanf("%d", &arr[i]);

		getchar();
		getline(cin, str);

		for(int i = 0; i < str.size(); i++){
			if(str[i] >= 'A' && str[i] <= 'Z'){
             	temp += str[i];
            }
		}
		str = "";
		for(int i = 0; i < 100; i++){
		    str += ' ';
		}	
		int cnt = -1;
		for(int i = 1; i <= n; i++){
		  for(int j = 1; j < 47; j++){
		   	if(arr[i] == fib[j]){
		   		str[j] = temp[i - 1];
		   		if(cnt < j) cnt = j;
		   	}
		  }
		}
		cout<<str.substr(1, cnt)<<endl;
		temp = "";	
    }               
}