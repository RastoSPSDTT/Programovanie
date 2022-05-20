#include <stdio.h>

int main()
{
char veta[100]="cau cau cau caucau cau";
int p=0,i=0;
char znak,zamena;

printf("zadaj znak na zamenu");
scanf("%c %c",&znak,&zamena);

while (veta[i]!='\0')
{
    int(veta[i]==znak) veta[i]=zamena;
    i++;
}


printf ("%s",veta[i]);

return 0 ;
 }
