#include <stdio.h>

int main(void)
{
    int a;
    while(1)
    {
        scanf("%d", &a);
        if(a < 0 || a > 100)
        {
        break;
        }
        if(a >= 80)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }    
    return 0;
}