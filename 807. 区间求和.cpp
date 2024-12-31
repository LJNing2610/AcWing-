#include<bits/stdc++.h>
using namespace std;

int sum(int l, int r){
	int res=0;
	for(int i=l;i<=r;i++){
		res+=i;
	}
	return res;
}

int main() {
	double a,b;
 	cin>>a>>b; 
	cout<<sum(a,b);
	
	return 0;
}



