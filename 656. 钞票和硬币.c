#include <stdio.h>
int main()
{
  double n;
  int m,i; 
  scanf("%lf",&n);
  m=n*100;
  int a[12]={10000,5000,2000,1000,500,200,100,50,25,10,5,1};
  printf("NOTAS:\n");
  for(i=0;i<12;i++)
  {
      if(i<6){
	  printf("%d nota(s) de R$ %.2f\n",m/a[i],a[i]/100.0);
	  m%=a[i];
	  }
      if(i==6)printf("MOEDAS:\n");
      if(i>=6){
	  printf("%d moeda(s) de R$ %.2f\n",m/a[i],a[i]/100.0);
	  m%=a[i];
	  }
  }

}

