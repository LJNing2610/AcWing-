#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
	int a[100][100];
	while(cin>>n,n!=0){
		int layers = (n + 1) / 2;
        int center = (n - 1) / 2;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(n%2!=0)
					a[i][j]=(n+1)/2-max(abs(n/2-i),abs(n/2-j));
				else
					a[i][j]=(n-1)/2.0-max(abs((n-1)/2.0-i),abs((n-1)/2.0-j))+1;
			}
		}
		for (int i = 0; i < n; i ++ ){
            for (int j = 0; j < n; j ++ ){ 
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}



