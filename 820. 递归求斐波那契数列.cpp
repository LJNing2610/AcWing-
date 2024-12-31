#include<bits/stdc++.h>
using namespace std;

int sb(int a){
	if(a==1||a==2)
	return 1;
	else
	return sb(a-1)+sb(a-2);
}

int main() {
	int n;
 	cin>>n;
	cout<<sb(n);
	
	return 0;
}



