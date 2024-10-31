#include <stdio.h>
#include <string.h>
int main() {
    char p1[20],p2[20],p3[20];
    scanf("%s %s %s",p1,p2,p3);
	
	if (!strcmp(p1,"vertebrado")&&!strcmp(p2,"ave"))
        printf("%s\n",!strcmp(p3,"carnivoro")?"aguia":"pomba");
    
	else if (!strcmp(p1,"vertebrado") && !strcmp(p2,"mamifero"))
        printf("%s\n",!strcmp(p3,"onivoro")?"homem":"vaca");
    
	else if (!strcmp(p1,"invertebrado") && !strcmp(p2,"inseto"))
        printf("%s\n",!strcmp(p3,"hematofago")?"pulga":"lagarta");
    
	else if (!strcmp(p1,"invertebrado") && !strcmp(p2,"anelideo"))
        printf("%s\n",!strcmp(p3,"hematofago")?"sanguessuga":"minhoca");
	return 0;
}
