#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int teplota[31][3],i,j,priemer,sucet=0;
    srand(time(0));
    for(j=0;j<31;j++)
    {
        for(i=0;i<3;i++)
        {
           teplota[j][i]=1+rand()%15;
        }
}
printf("Rano  Obed  Vecer\n");
for(j=0;j<31;j++)
{
 printf("%d.3.",j+1);
 for(i=0;i<3;i++)
 {
     printf("%d  ",teplota[j][i]);
 }
printf("\n");
}
for(j=0;j<31;j++)
{

sucet=0;
for(i=0;i<3;i++)
 {
     sucet=sucet+teplota[j][i];
 }
priemer=sucet/3;
printf("\n piremer teplot je %d",priemer);
}


for(i=0;i<3;i++)
{

for(j=0;j<31;j++)
 {
     sucet=sucet+teplota[j][i];
 }
priemer=sucet/31;
printf("\n piremer teplot je dni je %d",priemer);

}
return 0 ;
 }
