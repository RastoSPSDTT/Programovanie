#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int x [N],i;
srand(time(0));
for(i=0;i<N;i++)
{
    x[i]= 1+rand()%10;
}

for(i=0;i<N;i++)
{
    printf("%d ",x[i]);
}

for (i=0;i<N;i++)
{
  if (x[i]%2!=0)
printf("\n %d ",x[i]);
}
return 0 ;
}
