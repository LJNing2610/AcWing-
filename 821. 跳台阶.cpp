#include<bits/stdc++.h>
using namespace std;

int n;

int sb(int a)
{
    if (a== 1)  return 1;
    if (a== 2)  return 2;
    return sb(a - 1) + sb(a - 2);
}

int main()
{
    int n;
    cin>>n;
    cout<<sb(n);
    return 0;
}
