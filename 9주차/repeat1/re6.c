#include <stdio.h>

int main(void)
{
    int a;
    while(1)
    {
        scanf("%d", &a);
        if(a == 0)
        {
        break;
        }
        if(a > 0)
        {
            printf("positive number\n");
        }
        else
        {
            printf("negative number\n");
        }
    }    
    return 0;
}