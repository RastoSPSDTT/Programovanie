#include <stdio.h>
int NSD (int a,int b);
int main()
{
int a,b,i;
printf("zadaj cisla:");
scanf("%d %d",&a,&b);
printf("NSD je %d",NSD(a,b));

return 0;

}
int NSD (int a,int b)
{
    if(a==b) return a;
    else
    {
        if (a>b) return NSD(a-b,b);
        else return NSD (a,b-a);
    }
}
