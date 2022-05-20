#include <stdio.h> // knižnica

int main()
{
int r,s,i,j;
    printf("zadaj stlpce riadky");
    scanf("%d %d" ,&r,&s);
for(j=1;j<=r;j++)
{
    for(i=1;i<=s;i++)
    {
    printf("*");
    }
    printf("\n");

}


    return 0;
}

