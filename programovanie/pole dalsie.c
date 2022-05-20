#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int pocet,i,sucet=0,priemer;

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


return 0 ;
 }
