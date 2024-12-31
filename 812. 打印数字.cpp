#include <bits/stdc++.h>
using namespace std;
void print(int a[], int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	}
    
int main(){

    int n,size;
	cin>>n>>size;
	int b[n];
   for (int i = 0; i < n; i++) 
        cin >> b[i];
    print(b,size);
    return 0;
}
