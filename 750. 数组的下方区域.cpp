#include<bits/stdc++.h>
using namespace std;
int main() {
	double res=0;
	string str1; 
	double a[12][12];
	cin>>str1;
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>a[i][j]; 
		}
	}
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			if(j+i>=12&&i>j)
			res+=a[i][j]; 
		}
	}
	if(str1=="S"){
		cout<<fixed<<setprecision(1);
		cout<<res;
	}else{
		cout<<fixed<<setprecision(1);
		cout<<res/30.0;
	}
    return 0;
}



