#include <bits/stdc++.h>
using namespace std;
struct CAP{
 	int n;
 	bool f;
 	CAP(){
 	 	f = false;
 	}
};

int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
 	int n, m, c, capacity, temp, cnt = 1;
 	vector<int> v;
 	while(scanf("%d%d%d",&n,  &m ,&c) !=EOF){
 	if(n== 0) break;
 	CAP arr[21];
 	capacity = 0;
 	    for(int i = 1;i <= n;i++){
 	     	scanf("%d", &arr[i].n);
 	    }
 	    for(int i = 1;i <= m;i++){
 	     	scanf("%d", &temp);
 	     	v.push_back(temp);
  	    }
  	    temp = -1;
 	    for(int i=0;i<m;i++){
 	     	if(!arr[v[i]].f){
 	     		capacity +=arr[v[i]].n;
 	     		arr[v[i]].f = true;
 	     		if(capacity > temp) temp = capacity;
 	     	}
 	     	else{ 
 	     		capacity -= arr[v[i]].n;
 	     		arr[v[i]].f = false;
 	     	}
 	     	if(capacity > c) break;
 	    }
 	    if(capacity > c){
 	     	printf("Sequence %d\nFuse was blown.\n\n",cnt++);
 	    }
 	    else {
 	     	printf("Sequence %d\nFuse was not blown.\n", cnt++);
 	     	printf("Maximal power consumption was %d amperes.\n\n", temp);
 	  
 	    }
 	    v.clear();
 	}
}