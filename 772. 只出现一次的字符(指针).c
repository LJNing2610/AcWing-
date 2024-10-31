#include <stdio.h>
int main() {
    char a[100000];
    scanf("%s", a);
	int count[1000] = {0};  
    char*p= a;             
	while(*p){
        count[*p]++;       
        p++;                   
    }
	p=a;
    while (*p) {
        if (count[*p] == 1) { 
            printf("%c\n", *p);
            return 0;
        }
        p++; 
    }
    printf("no\n");
    return 0;
}

