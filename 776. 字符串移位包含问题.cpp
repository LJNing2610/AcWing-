#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2,strn;
	cin>>str1>>str2;
	if(str1.size()<str2.size())
	swap(str1,str2);
	if((str1+str1).find(str2)!=string::npos){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
} 
