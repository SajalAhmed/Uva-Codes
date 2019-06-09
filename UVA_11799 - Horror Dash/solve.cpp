#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, temp, i=1;
    vector<int> v;
    char c;
    scanf("%d", &n);
    while(n--){
   		while(1){
        	scanf("%d%c",&temp,&c);
        	v.push_back(temp);
        	if(c == '\n') break;
        }
        sort(v.rbegin(), v.rend());
        printf("Case %d: %d\n", i++, v[0]);	
        v.clear();
    }            
return 0;
}            