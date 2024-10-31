#include <stdio.h>
long long int sb(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    long long int f = 0;
	long long int b = 1;
	long long int a = 0;
	int i;
    for (i = 2; i <= n; i++) {
        f = a + b;
        a = b;
        b = f;
    }
    return b;
}

int main() {
	int n,i;
	int a[100]; 
    scanf("%d", &n);	
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        long long int res= sb(a[i]);
        printf("Fib(%d) = %lld\n", a[i], res);
    }
    
    return 0;
}
    
