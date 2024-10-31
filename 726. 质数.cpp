#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--){
        int x;
        bool prime=true;
        cin>>x;
        if(x==1) 
		cout<<x<<" is not prime"<<endl;
        else{
            int i;
            for(i=2;i<=x/i;i++)
            {
                if(x%i==0) 
                {
                    prime=false;
                    break;
                }
                else prime=true;
            }
            if(prime) 
			cout<<x<<" is prime"<<endl;
            else 
			cout<<x<<" is not prime"<<endl;
        }
    }
    return 0;
}
