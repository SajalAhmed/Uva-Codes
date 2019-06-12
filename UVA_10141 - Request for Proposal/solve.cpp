#include <bits/stdc++.h>
using namespace std;
struct ST{
  	float price;
  	int meet_requirement;
  	string proposal_name;

};
bool structSort(ST a, ST b){
 	if(a.meet_requirement != b.meet_requirement){
 	 	return a.meet_requirement > b.meet_requirement;
 	}
 	return a.price < b.price;
}
int main(){
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int n, m, temp, cnt = 1, flag = 0;
	string str;
	while(scanf("%d %d", &n, &m) == 2){
		if(n==0) break;
		if(flag == 1) printf("\n");
		cin.ignore();
		ST proposal[1001];
		temp = -1;
	 	for(int i = 0;i < n;i++){
	 	    getline(cin, str);
	 	}	
	 	
	 	for(int i = 0;i < m;i++){
	 		getline(cin, proposal[i].proposal_name);
	 		scanf("%f%d", &proposal[i].price, &proposal[i].meet_requirement);
	 		cin.ignore();
	 		
	 		for(int j = 0;j < proposal[i].meet_requirement;j++){
	 		 	getline(cin, str);
	 	 	}
	 	}
	 	sort(proposal, proposal + m, structSort);
	 	printf("RFP #%d\n", cnt++);
	 	cout<<proposal[0].proposal_name<<"\n";
	 	flag = 1;
	}

return 0;
}