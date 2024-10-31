#include <stdio.h>
int main() {
    int a[7]={100,50,20,10,5,2,1},n,i,b;
    scanf("%d",&n);
    printf("%d\n",n);
	for(i=0;i<7;i++){
    b=n/a[i];
    printf("%d nota(s) de R$ %d,00\n",b,a[i]);
    n%=a[i];
	}
    return 0;
}
