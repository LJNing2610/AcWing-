#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,maxstr;
    int maxm=0,last=0;
	while(cin>>str){
		int a=str.size();
		if(str[a-1]=='.'){
		a--;
		str.erase(a,1);
		last=1;
		}
		if(a>maxm){
			maxstr=str;
			maxm=a;
		}
		if(last)
		break;
	}
	cout<<maxstr;
    return 0;
}
