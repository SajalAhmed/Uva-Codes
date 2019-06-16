#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("ouput.txt", "w", stdout);
	int t, m = 0 , e = 0, bm = 0, am = 0, ae = 0;
    string str;
    bool flag = false;
    scanf("%d", &t);
    while(t--){
    	cin>> str;
    	for(int i = 0; i < str.size();i++){
    	 	if(str[i] == 'M'){
    	 	 	m++;
    	 	 	if(m > 1){
    	 	 	 	flag = true;
    	 	 	 	break;
    	 	 	}
    	 	}
    	 	else if(str[i] == 'E'){
    	 	 	e++;
    	 	 	if( e > 1){
    	 	 	 	flag = true;
    	 	 	 	break;
    	 	 	}
    	 	}
    	 	else if(str[i] == '?'){
    	 	 	if(m == 0) {
    	 	 	 	bm++;
    	 	 	}
    	 	 	else if(e == 0){
    	 	 	 	am++;
    	 	 	}
    	 	 	else if(e == 1){
    	 	 	 	ae++;
    	 	 	}
    	 	 	else{
    	 	 	 	flag = true;
    	 	 	 	break;
    	 	 	}
    	 	}
    	 	else{
    	 	 	flag = true;
    	 	 	break;
    	 	}
    	}
    	if(flag){
    	 	printf("no-theorem\n");
    	}
    	else{
    	 	if(am + bm == ae && am > 0 && bm > 0){
    	 	 	printf("theorem\n");
    	 	}
    	 	else printf("no-theorem\n");
    	}
    	m = e = bm = am = ae = 0;
    	flag = false;

    }
}	