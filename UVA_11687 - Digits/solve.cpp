#include <bits/stdc++.h>
using namespace std;
int numberOfdigit(int i, int n){
 	if(i <= 9){
 	 	return 1;
 	}
 	return n + numberOfdigit(i / 10, n + 1);
}
int main(){

 	string str;
 	int temp = 0 ;
 	while(cin>>str){
 	 	if(str == "END"){
 	 	 	break;
 	 	}
 	 	temp = s.size();
 	 	while(temp != 1){
 	 	 	 temp = temp / 10;
 	 	}
 	 }
 	printf("%d\n", numberOfdigit(123, 0));

}