#include<bits/stdc++.h>
using namespace std;
int main() {
    char a[31],b[31],n;
    int j=0;
    cin>>a;
    cin>>n;
    int c=strlen(a);
    for(int i=0;i<c;i++){
    	if(a[i]==n){
    	b[i]='#';
    	}else
    	b[i]=a[i];
	}
	
	cout<<b<<'\0'; 
    return 0;
}



