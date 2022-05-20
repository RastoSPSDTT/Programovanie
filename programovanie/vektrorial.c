#include <stdio.h>

int main()
{
int v=1,i,n;
printf("zadaj faktorial:");
scanf("%d",&n);

for (i=n;i>0;i--)

{
 v=v*i;

}
printf("faktorial je %d",v);

return 0 ;
 }
