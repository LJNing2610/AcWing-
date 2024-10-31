#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,c=0; 
	string a,b;
	cin>>n>>a>>b;
		for(int i=0;i<a.size();i++){
			if(a[i]==b[i])
			c++;
		}
		if(c/a.size()>=n)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	return 0;
	} 
