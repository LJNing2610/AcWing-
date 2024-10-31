#include<stdio.h>
#include<math.h>

int main(){
double a,b,c;

  scanf("%lf %lf %lf",&a,&b,&c);
  if(b*b-4*a*c<0||a==0)
  {
    printf("Impossivel calcular");
    return 0;
  }
  else 
  printf("R1 = %.5f\nR2 = %.5f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
  return 0;
}
