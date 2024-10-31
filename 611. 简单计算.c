#include<stdio.h>
int main()
{
    int a[2],b[2],i;
    double c[2];
    for(i=0;i<2;i++){
    scanf("%d %d %lf",&a[i],&b[i],&c[i]);
	}
    printf("VALOR A PAGAR: R$ %.2f",b[0]*c[0]+b[1]*c[1]);
    return 0;
}
