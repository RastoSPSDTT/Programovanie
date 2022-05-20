#include <stdio.h>

int main()
{
int a=0,x,i;
scanf("%d" ,&x);
for(i=1;i<=x;i++)
{
    if (x%i==0) a++;

}
if (a>2) printf ("nie je");
else printf ("je);

    return 0;
}

