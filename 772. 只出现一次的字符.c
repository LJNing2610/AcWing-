#include <stdio.h>
#include <string.h>

int main() {
    char a[100000];
    int i;
    scanf("%s", a);
	int count[128] = {0}; 
	int l= strlen(a);

    
    for (i = 0; i < l; i++) {
        count[a[i]]++;  
    }
    int found = 0;
    for (i = 0; i < l; i++) {
        if (count[a[i]] == 1) {
            printf("%c\n", a[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("no\n");
    }

    return 0;
}
