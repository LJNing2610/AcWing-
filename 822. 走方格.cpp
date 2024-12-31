#include<bits/stdc++.h>
using namespace std;
int sb(int a,int b){
	if(a==0||b==0)
	return 1;
	if(a==0&&b==0)
	return 0;
	return sb(a-1,b)+sb(a,b-1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<sb(n,m);
    return 0;
}
