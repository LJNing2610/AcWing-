#include<bits/stdc++.h>
using namespace std;

int sb(int a){
	if(a==1)
	return 1;
	else
	return a*sb(a-1);
}

int main() {
	int n;
 	cin>>n;
	cout<<sb(n);
	
	return 0;
}



