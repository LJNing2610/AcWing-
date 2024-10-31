#include <stdio.h>
int main() {
	int n,h,m,s;
	scanf("%d",&n);
	h=n/3600;
	m=n/60-60*h;
	s=n-3600*h-60*m;
	printf("%d:%d:%d",h,m,s);	
    return 0;
}
