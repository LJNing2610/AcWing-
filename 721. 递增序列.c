#include <stdio.h>
int main(){
	int a,i,n;
	while(scanf("%d",&n)){
	    if(n==0)
	    break;
	for(i=1;i<=n;i++){
	    if(i==n)
	    printf("%d",i);
	else
	    printf("%d ",i);
	}
	printf("\n");
    }
    return 0;
}
    
