#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char b;
    double n;
    cin>>a>>b;
    double res=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>n;
            if(i==a) 
			res+=n;
        }
    }
	cout<<fixed<< setprecision(1);
    cout<<(b=='S'? res:res/12)<<endl;
    return 0; 
}



