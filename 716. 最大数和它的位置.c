#include <stdio.h>
int main()
{
	int a[100],i,lc,max=0;
    for (i=0;i<100;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
    max=a[i];
    lc=i;
	}
	}
	printf("%d\n%d",max,lc+1);

    return 0;
}
