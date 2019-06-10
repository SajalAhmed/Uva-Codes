#include <bits/stdc++.h>
//#define LOCAL_DEFINE 1
using namespace std;
struct cType{
  	vector<int> v;
  	int contain;
} arr[26];

int find_(int a, int b){
	for(int i = 0; i < arr[a].v.size();i++){
	 	if(arr[a].v[i] == b) return i;
	}
 	
}
void onto(int a){
 	int temp = arr[a].contain;
 	int sizeOfArr = arr[temp].v.size();

 	for(int i = sizeOfArr - 1; i > 0; i--){
 	 	if(arr[temp].v[i] != a){
 	 		arr[arr[temp].v[i]].contain = arr[temp].v[i];
 	 		arr[arr[temp].v[i]].v.push_back(arr[temp].v[i]);
 	 	 	arr[temp].v.pop_back();
 	 	}
 	 	else break;
 	}
}

void over(int a, int b){
	int temp = arr[a].contain;
	int n = find_(temp, a);
	int sizeOfArr = arr[temp].v.size();
	for(int i = n;i < sizeOfArr; i++){
	 	arr[arr[b].contain].v.push_back(arr[temp].v[i]);
	 	arr[arr[temp].v[i]].contain = arr[b].contain;
	}
	arr[temp].v.erase(arr[temp].v.begin() + n, arr[temp].v.end());	
}

int main(){
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif

 	int n, a, b, temp;
 	char str[20];

 	scanf("%d", &n);

 	for(int i = 0; i < n; i++){ 
 		arr[i].v.push_back(i);
 		arr[i].contain = i;
 	}	

 	while(scanf("%s", str)){
 	 	if(strcmp(str, "quit") == 0){
 	 	 	break;
 	 	}
 	 	if(strcmp(str, "move") == 0){
 	 	 	scanf("%d %s %d", &a, str, &b);
 	 	 	if( a != b && arr[a].contain != arr[b].contain)
 	 	 	if(strcmp(str, "onto") == 0){
 	 	 	    onto(a);
 	 	 	    arr[arr[a].contain].v.pop_back();
 	 	 	    onto(b);
 	 	 	    arr[arr[b].contain].v.push_back(a);
 	 	 	    arr[a].contain = arr[b].contain;
 	 	 	}
 	 	 	else{
 	 	 	 onto(a);
 	 	 	 arr[arr[a].contain].v.pop_back();
 	 	 	 arr[arr[b].contain].v.push_back(a);
 	 	 	 arr[a].contain = arr[b].contain;
 	 	 	}
        }
        else{
         	scanf("%d %s %d", &a, str, &b);
         	if( a != b && arr[a].contain != arr[b].contain)
         	if(strcmp(str, "onto") == 0){
         	 	onto(b);
         	 	over(a, b);
         	}
         	else over(a, b);
        }
 	}

 	for(int i = 0;i < n; i++){
 	 	printf("%d:", i);
 	 	temp = arr[i].v.size();
 	 	for(int j = 0; j < temp; j++){
 	 	 	printf(" %d", arr[i].v[j]);
 	 	}
 	 	printf("\n");
 	}
}