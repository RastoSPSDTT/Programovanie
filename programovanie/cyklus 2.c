#include <stdio.h> // knižnica

int main()
{
int i,a;
i=1;
while (i<=30)
{
    a=i;
printf("%d ",a);
i++;
}
int a;

do
{


printf("zadaj kladne cislo:");

scanf("%d",&a);
}
while(a<0);
printf ("kladne");

int a,b,c=0,i;

scanf("%d %d" ,&a,&b);
 for(i=1;i<=b;i++)
 {
     c=c+a;
 }
 printf("%d",c);
 int a,b,c=1,i;

scanf("%d %d" ,&a,&b);
 for (i=1;i<=b;i++)
 {
     c=c*a;
 }
 printf("%d ",c);
    return 0;
}

