#include <stdio.h>
int main()
{
	int i,cnt=0;
	double a[6];
    for (i=0;i<6;i++){

    scanf("%lf",&a[i]);
	if(a[i]>0)
	cnt++;
	}
	printf("%d positive numbers",cnt);

    return 0;
}
