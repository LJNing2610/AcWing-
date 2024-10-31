#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[3],i;
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	sort(a,a+3);
	printf("%d eh o maior",a[2]);
    return 0;
}	
