#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(a<b)
	c=b-a;
	else
	c=b+24-a;
	if(a==b)
	c=24;
	printf("O JOGO DUROU %d HORA(S)",c);
	return 0;
}  
