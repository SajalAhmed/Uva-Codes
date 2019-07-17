#include <bits/stdc++.h>
using namespace std;
bool isSmaller(string str1, string str2) { 
	int len1 = str1.length(), len2 = str2.length(); 
	if(len1 < len2) return true; 
	if(len1 >len2) return false; 
	for(int i = 0; i < len1; i++) { 
		if(str1[i] < str2[i]) return true; 
		if(str1[i] > str2[i]) return false; 
	} 
	return false; 
} 

string doSum(string a, string b){
    if(a.size() < b.size())
        swap(a, b);
 
    for(int i=b.size()-1, j = a.size()-1; i>=0; i--, j--){
        a[j] += (b[i]-'0');

     }
    for(int i=a.size()-1; i>0; i--){
        if(a[i] > '9'){
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
     }
    if(a[0] > '9'){
        string k;
        k += a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}
int main(){
	int size_, flag = 1;
	string fib[111];
	string t1, t2, sum;
 	fib[1] = "1";
 	fib[2] = "2";
 	for(int i = 3; i <= 110; i++){
 	 	fib[i] = doSum(fib[i - 1], fib[i - 2]);
 	}
 	while(cin>>t1>>t2){
 		if(flag < 0) printf("\n");
 		flag = 1;
 		sum = "0";
 		size_ = t1.size();
 		for(int i = 0; i < size_; i++){
 		 	if(t1[i] == '1'){
				sum = doSum(sum, fib[size_ - i]);	
 		 	}
 		}
 		size_ = t2.size();
 		for(int i = 0; i < size_; i++){
 		 	if(t2[i] == '1'){
 		 	 	sum = doSum(sum, fib[size_ - i]);
 		 	}
 		}
 		vector<int> v;
 		for(int i = 110; i > 0; i--){
 		 	if(sum == fib[i]){
 		 		v.push_back(i);
 		 		flag = -1;
 		 		break;	
 		 	}
 		 	if(isSmaller(fib[i], sum)){ 
 		 		t1 = fib[i];
 		 		v.push_back(i);
 		 	 	break;
 		 	}
 		}
 		if(flag > 0 && !v.empty()){
 		   for(int i = v[0] - 1; i > 0; i--){
 		       t2 = doSum(fib[i], t1);
 		       if(isSmaller(t2, sum)){
 		        	t1 = t2;
 		        	v.push_back(i);
 		       }
			   if(t2 == sum){
 		        	v.push_back(i);
 		        	break;
 		       }
 		   }
 		}
 		if(v.empty()) printf("0\n");
 		else{ 
 			flag = 0;
 			for(int i = v[flag]; i > 0; i--){
 			 	if(v.size() > flag && i == v[flag]){
 			 		printf("1");
 			 		flag++;
 			 	 }	
 			 	else printf("0");
 			}
 			printf("\n");
 	    }
 	    flag = -1;
 	}
return 0;
}