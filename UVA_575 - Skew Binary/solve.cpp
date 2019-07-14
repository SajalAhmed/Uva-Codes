#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int size_ , temp, sum = 0;
	while(cin>>str){
	 	size_ = str.size();
	 	if(size_ == 1 && str[0] == '0') break;
	 	for(int i = 0 ; i < size_; i++){
	 		temp = pow(2, size_ - i);
	 	 	sum += (str[i] - '0') * (temp - 1);
	 	}
	 	printf("%d\n", sum);
	 	sum = 0;
	}
return 0;
}