#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int pole[N],i,p=0;

srand(time(0));

for(i=0;i<N;i++)
{
    pole[i]=0+rand()%10;
}

for(i=0;i<N;i++)
{
    printf("%d ",pole[i]);

}
for (i=0;i<N;i++)
{
if (pole[i]==0)
{
    printf("\n %d",p);
    p=0;
}
   else {p++;}
}
printf("\n %d",p);






return 0 ;
 }
