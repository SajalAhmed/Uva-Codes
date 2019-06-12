#include <bits/stdc++.h>
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
 	int n, a, b;
 	scanf("%d", &n);
 	cin.ignore();
 	char str[10001];
 	while(n--){
 		a = b = 0;
 	 	gets(str);
 	 	for(int i = 0;str[i] != '\0';i++){
 	 	 	if(str[i] == 'F') a++;
 	 	 	if(str[i] =='M') b++;
 	 	}
 	 	if(a==b && a != 1) printf("LOOP\n");
 	 	else printf("NO LOOP\n");
 	}
}