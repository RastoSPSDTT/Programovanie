#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int i,znamky[4][5],j;
srand(time(0));

for(j=0;j<4;j++)
{
   for(i=0;i<5;i++)
{
    znamky[j][i]=1+rand()%5;
}
}
for(j=0;j<4;j++)
{
    if(j==0)
    printf("GEO ");
    if(j==1)
    printf("DEJ ");
    if(j==2)
    printf("MAT ");
    if(j==3)
    printf("SJL ");

   for(i=0;i<5;i++)
{
    printf("%d ",znamky[j][i]);
}
printf("\n");
}

return 0 ;
}
