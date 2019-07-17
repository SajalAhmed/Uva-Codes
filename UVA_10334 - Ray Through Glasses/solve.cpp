#include <bits/stdc++.h>
using namespace std;
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
	int n;
    string fib[1001] = {"1", "2"};
    for(int i = 2; i <= 1000; i++){
     	fib[i] = doSum(fib[i-1], fib[i -2]);
    }
    while(scanf("%d", &n) != EOF){
     	cout<<fib[n]<<endl;
    }
    return 0;
}