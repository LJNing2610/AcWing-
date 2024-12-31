#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int ret=0,c;
    c=min(a,b);
    while(a%c!=0||b%c!=0){
        c--;
    }
    ret=c;
    return ret;
}
    
int main(){
    int a,b,g;
    cin>>a>>b;
    g=gcd(a,b);
    cout<<g;
    
    return 0;
}
