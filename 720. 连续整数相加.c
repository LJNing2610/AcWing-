#include<stdio.h>
int main()
{
	int a,n,i,b,res=0;
	scanf("%d",&a);
	for(i=0;i<100;i++){
	scanf("%d",&b);
		
		if(b>0){
		n=b;
		break;
		}
	}
	for(i=0;i<n;i++)
    res+=a++;
    printf("%d",res);
    return 0;
}
