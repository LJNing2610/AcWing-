#include<stdio.h>
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	printf("Perimetro = %.1f",a+b+c);
	else
	printf("Area = %.1f",(a+b*1.0)*c*0.5);
	return 0;
}   
