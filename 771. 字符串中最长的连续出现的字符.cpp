#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
	while(n--){
    char a[201],loc;
    int maxl=0; 
	cin>>a;
	int l=strlen(a);	
	for (int i = 0;i<l;i++){
		int cnt=1;
	while(i + cnt < l && a[i]==a[i+cnt]){
		cnt++;
		}
	if(cnt>maxl){
		maxl=cnt;
		loc=a[i];
	}
		i+=cnt-1; 
	}
    	cout << loc<<" "<< maxl << endl;
    }

    return 0;
}
