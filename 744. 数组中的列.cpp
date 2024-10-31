#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	double res=0;
	string str1; 
	double a[12][12];
	cin>>n;
	cin>>str1;
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>a[i][j]; 
		}
	}
	for(int i=0;i<12;i++){
		res+=a[i][n];
	}
	if(str1=="S"){
		cout<<fixed<<setprecision(1);
		cout<<res;
	}else{
		cout<<fixed<<setprecision(1);
		cout<<res/12.0;
	}
    return 0;
}



