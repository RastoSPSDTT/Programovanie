#include <stdio.h>
int main()
{
int a,b,i;
printf("zadaj cisla:");
scanf("%d %d",&a,&b);
while(a!=b)
{

if(a>b) a=a-b;
else
b=b-a;
}
printf("najvacsi delitel je %d",a);

}
