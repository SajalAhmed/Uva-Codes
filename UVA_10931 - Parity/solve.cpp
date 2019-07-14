#include <bits/stdc++.h> 
using namespace std; 
struct ctype{
 	string s;
 	int cnt;
} arr;
void decToBinary(int n) {
	string str;
	int sum = 0;
	char digits[3] = {'0', '1'}; 
	while (n > 0) { 
		if(n % 2 == 1) sum++;
		str += digits[n % 2]; 
		n = n / 2; 
	}
	reverse(str.begin(), str.end()); 
  	arr.s = str;
  	arr.cnt = sum; 
} 
int main(){ 
	int n; 
	while(scanf("%d", &n), (n|0)){
		decToBinary(n);
	 	cout<<"The parity of "<<arr.s<<" is " <<arr.cnt <<" (mod 2).\n";
	}
	return 0; 
} 
