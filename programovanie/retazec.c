#include <stdio.h>

int main()
{
    char meno[10];
    printf("Ako sa volas?");
    scanf("%[^\n]s",meno);//to �udo to p�e s medzerami
    printf("Ahoj %s",meno);

return 0 ;
 }
