#include<bits/stdc++.h>
using namespace std;

int get_unique_count(int a[], int n){
	int b[10000],cnt=0;
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=1;i<=1000;i++){
		if(b[i]>0)
		cnt++;
	}
	return cnt;
}

int main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<get_unique_count(a,n);
	
} 
