#include <stdio.h>
int main(){
	int a,i,n,sum,t;
	while(scanf("%d %d",&a,&n)){
	sum=0;
	if(n<=0||a<=0)
	    break;
	if(a>n){
		t=n;
		n=a;
		a=t;
		}
	for(i=a;i<=n;i++){
	    printf("%d ",i);
	    sum+=i;
	}	
	printf("Sum=%d",sum);
	printf("\n");
    }
    return 0;
}

