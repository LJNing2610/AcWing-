#include <bits/stdc++.h>
using namespace std;
int max(int x, int y){
   if(x>y)
   return x;
   else
   return y; 
}
    
int main(){
    int x,y,g;
    cin>>x>>y;
    g=max(x,y);
    cout<<g;
    
    return 0;
}
