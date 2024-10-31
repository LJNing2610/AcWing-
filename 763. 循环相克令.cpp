#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
	while(n--){
    char c1[100],c2[100]; 
	cin>>c1>>c2;
	int a=strlen(c1);
	int b=strlen(c2);
	if(a-b==3||a-b==-2||a-b==-1){
		cout<<"Player1"<<endl;
	}else if(a==b){
		cout<<"Tie"<<endl;
	}else{
		cout<<"Player2"<<endl;
	}
}
    return 0;
}
