#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,loc,min=1001;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<min){
			loc=i;
			min=a[i];
		}
	}
	cout<<"Minimum value: "<<min<<endl;
	cout<<"Position: "<<loc;
    return 0;
}



