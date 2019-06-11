#include <bits/stdc++.h>
using namespace std;
struct cType{
  	int leftBuddy;
  	int rightBuddy;
  	cType(){
  	 	leftBuddy = 0;
  	 	rightBuddy = 0;
  	}
};
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);

	int s, b, n, m, t1;
	
	while(scanf("%d%d", &s, &b), (s||b)){
		cType c[s + 1];
		c[0 + 0].leftBuddy = -1;
		c[s + 1].rightBuddy = -1;
	 	for(int i = 1;i <= b;i++){
	 	 	scanf("%d%d",&n, &m);
	 	 	t1 = n - 1;
	 	 	while(1){
	 	 	 	if(c[t1].leftBuddy == 0){
	 	 	 	 	c[n].leftBuddy = t1;
	 	 	 	 	c[m].leftBuddy = t1;
	 	 	 	 	break;
	 	 	 	}
	 	 	 	else if(c[t1].leftBuddy < 0){
	 	 	 	 	c[n].leftBuddy = -1;
	 	 	 	 	c[m].leftBuddy = -1;
	 	 	 	 	break;
	 	 	 	}
	 	 	 	else if(c[t1].leftBuddy > 0){
	 	 	 	 	t1 = c[t1].leftBuddy;
	 	 	 	}
	 	 	}
	 	 	t1 = m + 1;
	 	 	while(1){
	 	 	 	if(c[t1].rightBuddy == 0){
	 	 	 	 	c[n].rightBuddy = t1;
	 	 	 	 	c[m].rightBuddy = t1;
	 	 	 	 	break;
	 	 	 	}
	 	 	 	else if(c[t1].rightBuddy < 0){
	 	 	 	 	c[n].rightBuddy = -1;
	 	 	 	 	c[m].rightBuddy = -1;
	 	 	 	 	break;
	 	 	 	}
	 	 	 	else if(c[t1].rightBuddy > 0){
	 	 	 	 	t1 = c[t1].rightBuddy;
	 	 	 	}
	 	 	}
	 	 	if(c[n].leftBuddy < 0) printf("* ");
	 	 	else printf("%d ", c[n].leftBuddy);
	 	 	if(c[m].rightBuddy < 0) printf("*\n");
	 	 	else printf("%d\n", c[m].rightBuddy);	 
	 	}
	 	printf("-\n");
	}       
}