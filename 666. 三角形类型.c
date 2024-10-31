#include <stdio.h>
double max(double a,double b){
    double ret;
    if(a>b){
        ret=a;
    }else{
        ret=b;
    }
    
    
    return ret;
}


double min(double a,double b){
    double ret;
    if(a>b){
        ret=b;
    }else{
        ret=a;
    }
    
    
    return ret;
}

int main(){
    double a,b,c;
    double x,z,i;
    scanf("%lf %lf %lf", &a, &b, &c);
    x=max(a,max(b,c));
    i=min(a,min(b,c));
    z=a+b+c-x-i;
    a=x;
    b=z;
    c=i;
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else{
    if(a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    if(a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    if(a*a<b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b&&b==c)
        printf("TRIANGULO EQUILATERO\n");
    if((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&a!=b))
        printf("TRIANGULO ISOSCELES\n");
		}
    
    
    return 0;
}

