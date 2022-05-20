#include <stdio.h> // knižnica

int main()
{
    int X,i;
    scanf("%d",&X);
    for(i=1;i<=X;i++)
    {
        if(X%i==0)
    printf("%d ",i);
    }


    return 0;
}

