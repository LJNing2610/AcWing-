#include<bits/stdc++.h>
using namespace std;

void sorte(int a[], int l, int r){
	sort(a+l,a+r+1);
}

int main(){
	int n,r,l,a[1000];
	cin>>n>>l>>r;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sorte(a,l,r);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
} 
