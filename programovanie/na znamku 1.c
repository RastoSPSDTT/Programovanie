#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int pole[N],i,max,min,arps,arpsu;
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


min=pole[0];

for(i=1;i<N;i++)
{
    if(pole[i]<min) min=pole[i];
}


arps=pole[N];



  arps=pole[0]+pole[1]+pole[2]+pole[3]+pole[4]+pole[5]+pole[6]+pole[7]+pole[8]+pole[9];



   {
       arpsu=arps/10
   }
   printf(aritmetický priemer je %d");



    return 0;
}

