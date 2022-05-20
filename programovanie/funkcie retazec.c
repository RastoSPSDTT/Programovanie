#include <stdio.h>
#include <string.h>
int main()
{
//char s1[20]="auto",s2[52]="bus";
//strcpy(s1,s2);
//printf("s jedna je %s s dva je %s",s1,s2);
char s1[20]="safsdgsdgsdgsdgsdg";
char s2[3]="g";
char *smernik;
smernik=strstr(s1,s2);
printf(" %s ",smernik);
return 0 ;
 }
