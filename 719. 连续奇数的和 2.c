#include<stdio.h>
int main(){
    int n,i,a[1000],b[1000],e,sum,t,r[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){sum=0;
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]>b[i]){
        t=b[i];
        b[i]=a[i];
        a[i]=t;
        }
            for(e=a[i]+1;e<b[i];e++){
            if(e%2!=0)
            sum+=e;
            }
			r[i] = sum;
    }
    for (i = 0; i < n; i++)
	{
		printf("%d\n", r[i]);
	}
    return 0;
}
