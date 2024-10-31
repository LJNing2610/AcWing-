#include<stdio.h>
int main()
{
	int a,b,c,x,y,z,t;
	scanf("%d %d %d",&a,&b,&c);
	x=a;
	y=b;
	z=c;
	if (a>b){
        t=b;
        b=a;
        a=t;
    }
    if (a>c){
        t=c;
        c=a;
        a=t;
    }
    if (b>c){
        t=c;
        c=b;
        b=t;
    }

	printf("%d\n%d\n%d\n\n",a,b,c);
	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
}
