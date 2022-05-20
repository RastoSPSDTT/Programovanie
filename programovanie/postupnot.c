#include <stdio.h> // knižnica

int main()
{
int a,d,n,i;

scanf("%d %d %d" ,&a,&d,&n);
for(i=1;i<=n;i++)
{
    printf("%d ",a);
    a=a+d;

}
    return 0;
}

