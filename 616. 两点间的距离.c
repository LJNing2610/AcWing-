#include<stdio.h>
#include<math.h>
int main(){
	double a[2],b[2],distance;
	int i;
	for(i=0;i<2;i++){
		scanf("%lf %lf",&a[i],&b[i]);
	}
	distance=sqrt(pow(fabs(a[1]-a[0]),2)+pow(fabs(b[1]-b[0]),2));
	printf("%.4lf",distance);
	return 0; 
} 	
