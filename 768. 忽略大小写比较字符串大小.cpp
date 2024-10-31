#include<bits/stdc++.h>
using namespace std;
int main(){
	int suma=0,sumb=0;
	string a,b;
	getline(cin,a);
	getline(cin,b);
		for(int i=0;i<a.size();i++){
			if(a[i]>='A'&&a[i]<='Z')
			a[i]+=32;	
		}
		for(int i=0;i<b.size();i++){
			if(b[i]>='A'&&b[i]<='Z')
			b[i]+=32;	
		}
		if(a>b)
		cout<<">";
		if(a==b)
		cout<<"=";
		if(a<b)
		cout<<"<";
	return 0;
	} 
