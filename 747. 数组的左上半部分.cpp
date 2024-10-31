#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b;
    double n;
    cin>>b;
    double res=0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>n;
            if(j+i<=10) 
			res+=n;
        }
    }
	cout<<fixed<< setprecision(1);
    cout<<(b=='S'? res:res/66.0)<<endl;
    return 0; 
}



