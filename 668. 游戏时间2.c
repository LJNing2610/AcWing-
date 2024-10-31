#include<stdio.h>
int main(){
	int a,b,c,d,h,m;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	b+=60*a;
	d+=60*c;
	if(b>=d)
	m=d+24*60-b;
	else{
	m=d-b;
	}
	h=m/60;
	m%=60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",h,m);
	return 0;
}

