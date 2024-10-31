#include <stdio.h>
#include <string.h>
int main(){
    char a[201],b[201];
    int i,j=0;
    scanf("%[^\n]",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]==' '&&a[i+1]==' '){
        	continue;
        }
		b[j]=a[i];
		j++;
		
	}
	b[j]='\0'; 
	printf("%s",b);

    return 0;
}
