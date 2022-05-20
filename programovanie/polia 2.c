#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int pole[N],i,max,min;
srand(time(0));


for(i=0;i<N;i++) //generuje èisla do pola
{
    pole[i]=rand()%100;

}
for(i=0;i<N;i++) //vypisuje
{
    printf("%d ",pole[i]);

}

max=pole[0];

for (i=1;i<N;i++)
{
    if(pole[i]>max) max=pole[i];
}
printf("max je %d",max);

min=pole[0];

for(i=1;i<N;i++)
{
    if(pole[i]<min) min=pole[i];
}
printf(" min je %d" ,min);


    return 0;
}

