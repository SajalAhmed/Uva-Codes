#include <bits/stdc++.h>
using namespace std;
struct cType{
 	int index, value;
 	cType(){
 	 	index = 0;
 	 	value = 0;
 	}  
};
bool sortStruct(cType a, cType b){
 	return a.value > b.value;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

	int g, p, s, t, v;
	int arr[101][101], temp[101];
	cType mp[101];
	while(scanf("%d %d", &g, &p), (g|p)){
	   for(int i = 0; i < g; i++){
	      for(int j = 0; j < p; j++){
	    	 scanf("%d", &v);
	    	 arr[i][v-1] =  j;
	      }
	   }
	   scanf("%d", &s);
	   for(int i = 0; i < s; i++){
	     scanf("%d", &t);
	     for(int j = 0; j < t; j++){
	       scanf("%d", &temp[j]);
	     }
	     for(int j = 0; j < g; j++){
	      	for(int k = 0; k < t; k++){
	      	 	mp[arr[j][k]].value += temp[k];
	      	 	mp[arr[j][k]].index = arr[j][k];
	      	}
	     }
	     sort(mp, mp + p, sortStruct);

	     v = 0;

	     for(int j = 0; j < p; j++){
	      	if(j == 0){
	      	 	temp[v++] = mp[j].index;
	      	}
	      	else if(mp[j - 1].value == mp[j].value){
	      	 	temp[v++] = mp[j].index;
	      	}
	      	else break;
	     }

	     sort(temp, temp + v);

	     for(int j = 0; j < v; j++){
          	if(j > 0) printf(" ");
          	printf("%d", temp[j] + 1);
         }
         printf("\n");
	     for(int j = 0; j < p; j++) 
	     	mp[j].value = 0;
	   }
	}
return 0;
}