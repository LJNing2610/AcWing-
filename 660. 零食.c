#include<stdio.h>
int main(){
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	switch (a){
	case 1:
	c=4.00;
	break;
	case 2:
	c=4.50;
	break;
	case 3:
	c=5.00;
	break;
	case 4:
	c=2.00;
	break;
	case 5:
	c=1.50;
	break;
	}
	printf("Total: R$ %.2f",b*c*1.0);
	return 0;
} 
