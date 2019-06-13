#include<bits/stdc++.h> 
using namespace std;  
int main() { 
//freopen("input.txt", "r", stdin);
//freopen("out.txt", "w", stdout);
	int n, temp = 0, cnt = 1, arr[100];
	char str[100001];
	//string str;
	scanf("%d", &n);
	while(n--){
		scanf("%s", str);
		memset(arr, 0 , sizeof arr);
		//for(int i=0;i<100;++i) arr[i] = 0;
		temp = 0;
		//scanf("%s",str);
		//cin>>str;
		for(int i = 0;str[i];i++){
		 	if(str[i] == '+'){
		 	 	  arr[temp]++;
		 	 	  if(arr[temp] == 256){
		 	 	  	arr[temp] = 0;
		 	 	  } 
		 	 	  //arr[temp] %= 256;
		 	}
		 	else if(str[i] == '-'){
		 	 	  arr[temp]--;
				  if(arr[temp] == -1) 
		 	 	  	arr[temp] = 255;
		 	}
		 	else if(str[i] == '<'){
		 	      temp--;	
		 	      if(temp == -1){ 
		 	      	temp = 99;
		 	      }
		 	}
		 	else if (str[i] == '>'){
		 		temp++;
				if(temp == 100) 
		 			temp = 0;

		 	}
		}
        printf("Case %d:", cnt++);
        for (int i = 0; i < 100; ++i)
            printf(" %02X", arr[i]);
        printf("\n");

		
   }
	
	return 0; 
} 
     
