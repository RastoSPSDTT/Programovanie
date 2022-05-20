#include <stdio.h> // knižnica
#define POCET 5
int main()
{
int pole[POCET],i;

    scanf("%d" ,&pole[0]);


    pole[1]=3;

    pole[2]=pole[0]+pole[1];

    pole[3]=pole[2]-10;

    pole[4]=2*pole[0];

        for(i=0;i<POCET;i++)
        {
         printf("%d ",pole[i]);

        }

    return 0;
}

