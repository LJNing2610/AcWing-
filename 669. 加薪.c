#include <stdio.h>
int main (){
	double a;
	scanf("%lf",&a);
	if(a>=0&&a<=400.00){
	printf("Novo salario: %.2f\n",1.15*a);
	printf("Reajuste ganho: %.2f\n",1.15*a-a);
	printf("Em percentual: 15 %%");
}
	else if(a>=400.01&&a<=800.00){
	printf("Novo salario: %.2f\n",1.12*a);
	printf("Reajuste ganho: %.2f\n",1.12*a-a);
	printf("Em percentual: 12 %%");
}
	else if(a>=800.01&&a<=1200.00){
	printf("Novo salario: %.2f\n",1.10*a);
	printf("Reajuste ganho: %.2f\n",1.10*a-a);
	printf("Em percentual: 10 %%");
}
	else if(a>=1200.01&&a<=2000.00){
	printf("Novo salario: %.2f\n",1.07*a);
	printf("Reajuste ganho: %.2f\n",1.07*a-a);
	printf("Em percentual: 7 %%");
}
	else if(a>2000){
	printf("Novo salario: %.2f\n",1.04*a);
	printf("Reajuste ganho: %.2f\n",1.04*a-a);
	printf("Em percentual: 4 %%");
}
	return 0;
}
