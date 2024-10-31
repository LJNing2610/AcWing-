#include<stdio.h>
int main(){
	int n,i,b;
	char a;
	double x,y,z;
	int coney=0,rat=0,frogs=0,all=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %c",&b,&a);
	if(a=='C')
	coney+=b;
	else if(a=='R')
	rat+=b;
	else
	frogs+=b;
	
	all+=b;
	}
	x=(double)((double)coney/(double)all)*100.0;
	y=(double)((double)rat/(double)all)*100.0;
	z=(double)((double)frogs/(double)all)*100.0;
	printf("Total: %d animals\n",all);
	printf("Total coneys: %d\n",coney);
	printf("Total rats: %d\n",rat);
	printf("Total frogs: %d\n",frogs);
	printf("Percentage of coneys: %.2f %%\n",x);
	printf("Percentage of rats: %.2f %%\n",y);
	printf("Percentage of frogs: %.2f %%\n",z);
	return 0;
	
}
