#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int pocet,i,sucet=0,priemer,p=0,naj=0,najp;

printf("Zadaj pocet kolko ziakov pisalopisomku:");
scanf("%d",&pocet);

int znamky[pocet];
for (i=0;i<pocet;i++)
{
    scanf("%d",&znamky[i]);
}
 for(i=0;i<pocet;i++)
 {
     sucet=sucet+znamky[i];
 }
priemer=sucet/pocet;
printf("\n piremer znamok je %d",priemer);

for(i=0;i<pocet;i++)
{
    if(znamky[i]>2) p++;
}
printf("\n horsich znamok ako 2 bolo %d",p);
naj=znamky[0];
for(i=0;i<pocet;i++)
{
    if(naj=znamky[i]) najp++;
    if(znamky[i]<naj)
    {
        naj=znamky[i]; // je to tu aby si zapametalo že je teraz na tom druhom policku to najlepsia znamka
        najp=1;
    }
}
printf("\n najlepsia znamka je %d a je tam %d krat",naj,najp);


return 0 ;
 }
