#include <stdio.h>
#include <ctype.h>
 
int main()
{   int i;
    char arr[20];
    printf("ют╥б: ");
    scanf("%s",&arr);
    printf("arr : %s \n\n", arr);
 
    for(i=0; i<20; i++)
    {
        printf("arr[%d] = %c  isdigit: %d \n",i,arr[i], isdigit(arr[i]));
    }
    
    printf("%d",isdigit(arr[20]));
    return 0;
}
