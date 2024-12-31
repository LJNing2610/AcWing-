#include<bits/stdc++.h>
using namespace std;
const int N=100;
void print2D(int a[][N], int row, int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(j==col-1)
			cout<<a[i][j]<<endl;
			else
			cout<<a[i][j]<<" "; 
		}
	} 
}

int main() {
	int row,col;
	cin>>row>>col;
	int a[N][N];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cin>>a[i][j];
		}
	}
	print2D(a,row,col);
	return 0;
}



