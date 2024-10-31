#include<stdio.h>
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a*b;i++){
	if(i%b==0)
	printf("PUM\n");
	else
	printf("%d ",i);
	}
	return 0;
}
