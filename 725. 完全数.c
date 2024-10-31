#include<stdio.h>
#include<math.h>

int sb(int x){
	int sum=1;
	if(x==1)
	return 0;
	for(int i=2;i<=sqrt(x);i++){
    	if(x%i==0){
    	sum+=i;
    	if(i!=1&&i!=x/i&&x/i!=x)
    	sum+=x/i;
		}
	
	}
	return sum;
}

int main(void){
    int n;
    	scanf("%d",&n);
   	for(int i=0;i<n;i++){
        int x; 
		scanf("%d",&x);
    	if(sb(x)==x)
			printf("%d is perfect\n",x);
		else 
			printf("%d is not perfect\n",x);
    }
    return 0;
}
