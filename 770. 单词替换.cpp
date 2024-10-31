#include <stdio.h>
#include <string.h>
int main(){
    char s[101],b[101],a[101];
    char *p;
    int i,j;
    int found=0;
    scanf("%[^\n]",s);
    getchar();
    scanf("%[^\n]",a);
    getchar();
    scanf("%[^\n]",b);
    
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a[0])
        {
            for(j=0;j<strlen(a);j++)
            {
                if(s[i+j]==a[j])
                {
                    found=1;
                }else
                {
                    found=0;
                    break;
                }
                
            }
            
            
        }
        
        if (found!=0&&(i==0||s[i-1]==' ')&&(s[i+strlen(a)]==' '||s[i + strlen(a)]=='\0'))
            {
                printf("%s",b);
                printf(" ");
                i+=strlen(a);
            }else
            {
                printf("%c",s[i]);
            }
        
    }
    
    return 0;
}
