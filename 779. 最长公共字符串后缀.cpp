#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		string s,b;
		cin>>s;
		int sb=s.size();
		for(int i=1;i<n;i++){
			cin>>b;
			int dasb=0;
			for(int j=0;j<b.size()&&j<s.size();j++){
				if(b[b.size()-1-j]==s[s.size()-1-j]){
					dasb++;
				}else{
					break;
				}
				
			}
			sb=min(sb,dasb);
		}
		if(sb!=0)
		cout<<s.substr(s.size()-sb)<<endl;
		else
		cout<<" "<<endl; 
	}
} 
