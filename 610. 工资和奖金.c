#include<stdio.h>
int main()
{
	char name;
	double a,b;
	scanf("%s",&name);
	scanf("%lf %lf",&a,&b);
	printf("TOTAL = R$ %.2f",a+b*0.15);
    return 0;
}
