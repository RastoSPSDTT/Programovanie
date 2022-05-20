#include <stdio.h>

int sucet(int a, int b); //deklaracia funkcie
int nacitanie(void);
int rozdiel(int a, int b);


int main()
{
int x,y,v,r;
x=nacitanie();
y=nacitanie();
 v=sucet (x,y);
 r=rozdiel(x,y);
 printf(" %d ",v);
 printf("rozdiel je %d",rozdiel(x,y));


return 0 ;
 }

int sucet(int a, int b)
{
    return a+b;

}
int nacitanie(void)
{
    int x;
    printf("zadaj cislo");
    scanf("%d ",&x);
    return x;
}
int rozdiel(int a, int b)
{
return a-b;
}
