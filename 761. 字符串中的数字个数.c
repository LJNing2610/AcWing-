#include <stdio.h>
int main(){
    char a[101];
    int i=0;
    int cnt=0;
    scanf("%[^\n]",a);
    
    while(a[i]!='\0'){

        if(a[i]>='0'&&a[i]<='9'){
            cnt++;
        }
        i++;
        
    }
    printf("%d",cnt);
    
    return 0;
}
