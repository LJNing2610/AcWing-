#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int size,int n){
	int b[1000];
	for(int i=0;i<n;i++){
		if(i<size){
			b[i]=a[size-1-i];
		}else{
			b[i]=a[i];
		}	
	}
		for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
		}	
}

int main(){
	int n,size,a[1000];
	cin>>n>>size;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,size,n);
} 
