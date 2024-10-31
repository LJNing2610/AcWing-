#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	while(cin>>a>>b){
		int j=0;
		for(int i=0;i<a.size();i++){
			if(a[i]>a[j])
			j=i;
		}
		a.insert(j+1,b);
		cout<<a<<endl;
	}
} 
