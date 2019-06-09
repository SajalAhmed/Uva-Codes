#include <bits/stdc++.h>
using namespace std;
string s  = "0123456789";

string sumString(string s1, string s2){
	int f1, f2, temp = 0, sum;
	if(s1 < s2) swap(s1, s2);

	string str = "";
	f1 = s1.size();
	f2 = s2.size();

	for(int i = 1;i <= f1;i++){
		if(f2-i > - 1){
			sum = s2[f2 - i] - '0';
		}

		sum += temp + s1[f1 - i] - '0';
		if(sum > 9) {
			str += s[sum % 10];
   			temp = sum / 10;
		}
		else {
 			str +=s[sum];
 			temp = 0;
		}
		sum = 0;
	}
	if(temp != 0)
		str += s[temp];

	reverse(str.begin(),str.end());	
	return str;
}    


int main (){      
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int n;
	string fib[5001];
	fib[0] = "0";
	fib[1] = "1";
	
	for(int i = 2;i<=5000;i++){
	 	fib[i] = sumString(fib[i-1], fib[i-2]);
	}
	
	while(scanf("%d", &n) != EOF){
	 	printf("The Fibonacci number for %d is ", n);
	 	cout<<fib[n]<<endl;
	}

return 0;
}