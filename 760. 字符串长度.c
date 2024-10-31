#include <stdio.h>

int main() {
    char a[101];
	int l=0;
	scanf("%[^\n]",a);
	while (a[l] != '\0') 
        l++;
	printf("%d\n", l);
	return 0;
}
