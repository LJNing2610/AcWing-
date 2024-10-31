#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
		for(int i=0;i<a.size();i++){
			if(a[i]>='A'&&a[i]<'Z'||a[i]>='a'&&a[i]<'z')
			a[i]+=1;
			else if(a[i]=='Z'||a[i]=='z')
			a[i]-=25;	
		}	
		cout<<a; 
	return 0;
	} 
