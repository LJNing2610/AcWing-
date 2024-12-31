#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, s1, s2;
    getline(cin,s,',');
    getline(cin,s1,',');
    getline(cin,s2);
    
    int a=s.find(s1);
    int b=s.rfind(s2);
    if(a==-1||b==-1){
    cout<<"-1";
    return 0;
    }
    int res=b-a-s1.size();
    if(res<0){
    cout<<"-1";
    return 0;
    }
    cout<<res;
}
