#include <bits/stdc++.h>
using namespace std;
int fact(int n){
   int ret=1;
   for(int i=1;i<=n;i++){
		ret*=i;
	}
	return ret;
}
    
int main(){
    int n,g;
    cin>>n;
    g=fact(n);
    cout<<g;
    
    return 0;
}
