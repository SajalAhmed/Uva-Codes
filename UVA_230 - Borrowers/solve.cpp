#include <bits/stdc++.h>
using namespace std;
#define LOCAL_DEFINE 1
struct Ctype{
   string book;
   string author;
   bool flag;
   Ctype(){
    	flag = false;
   }
};
bool sortString(Ctype a, Ctype b){
 	if(a.author != b.author){
 	 	return a.author < b.author;
 	} 
 	else {
 	 	return a.book < b.book;
 	}
}
Ctype split(string s, string delimiter = " by "){
	Ctype str;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != string::npos) {
        str.book = s.substr(1, pos-2);
        s.erase(0, pos + delimiter.length());
    }
    str.author = s;
    return str;
}

int main(){

#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "w", stdout);
#endif

	string str;
	Ctype c;

	vector<Ctype> stock, returnBooks;

	while(getline(cin, str)){
		if(str == "END") break;
		stock.push_back(split(str));
	}
	sort(stock.begin(), stock.end(), sortString);

	while(cin>>str){
		cin.ignore();
		if(str == "END") break;
		else if(str == "BORROW"){
		 	 getline(cin, str);
		 	 for(int i = 0;i < stock.size();i++){
		 	  	if(stock[i].book == str.substr(1, str.size()-2)){
		 	       stock[i].flag = true;
		 	       break;
		 	  	}
		 	 }
		}
		else if(str == "RETURN"){
		     getline(cin, str);
		     for(int i = 0;i < stock.size();i++){
		      	if(stock[i].book == str.substr(1, str.size()-2)){
		      	 	c.book = stock[i].book;
		      	 	c.author = stock[i].author;
		      	 	returnBooks.push_back(c);
		      	 	stock[i].flag = false;
		      	 	break;
		      	}
		     }
		}
		else{
			if(!returnBooks.empty()){
				 sort(returnBooks.begin(), returnBooks.end(), sortString);
				 reverse(returnBooks.begin(), returnBooks.end());
			}
			int previous = -1;
			while(!returnBooks.empty()){
				for(int i =  0;i < stock.size();i++){
					if(stock[i].book ==  returnBooks.back().book){
						if(previous == -1){
							cout<< "Put "<< '"'<<returnBooks.back().book<<'"'<<" first"<<endl;
					 		break;
						}
						else{
							cout<<"Put \""<<returnBooks.back().book<<"\" after \""<<stock[previous].book<<'"'<<endl;	
					 		break;
						}
					}
					if(stock[i].flag == false) previous = i;
				}
				returnBooks.pop_back();
			}
			printf("END\n");
	 	}	
	}  
		
return 0;
}