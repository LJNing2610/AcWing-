#include <stdio.h>
int main()
{
    int x,y,c=0,i,a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
    x=b;
    y=a;
	}
    else{
    x=a;
    y=b;
	}	
    for(i=x+1;i<=y-1;i++){
        if(i%2!=0)
		c=c+i;
    } 
    printf("%d",c);
    return 0;
}
