#include <stdio.h>

int main()
{
    char meno[10];
    printf("Ako sa volas?");
    scanf("%[^\n]s",meno);//to èudo to píše s medzerami
    printf("Ahoj %s",meno);

return 0 ;
 }
