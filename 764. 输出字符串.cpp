#include <bits/stdc++.h>
using namespace std;
int main(){
	string stra,strb;
	getline(cin,stra);
	int b=stra.size();
	for(int i=0;i<b;i++){
		if(i==b-1){
			strb+=static_cast<char>(stra[i]+stra[0]);
		}else{
		    strb+=static_cast<char>(stra[i]+stra[i+1]);
		}
	}
		cout<<strb;
	return 0;
}
