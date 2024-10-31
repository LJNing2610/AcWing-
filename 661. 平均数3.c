#include<stdio.h>
#include<math.h>

int main(){
double a,b,c,d,x,y,z;

  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
  x=(2*a+3*b+4*c+d)/10;
  printf("Media: %.1f\n",x);
  if(x>=7.0)
  printf("Aluno aprovado.\n");
  else if(x<5.0)
  printf("Aluno reprovado.\n");
  else{
  if(x>=5.0&&x<7.0){
	printf("Aluno em exame.\n");
	scanf("%lf",&y);
	printf("Nota do exame: %.1f\n",y);
	z=(x+y)/2;
	}
	if(z>=5.0)
	printf("Aluno aprovado.\n");
	else
	printf("Aluno reprovado.\n");
	printf("Media final: %.1f\n",z);
	}
  
  return 0;
}
