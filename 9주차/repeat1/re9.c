#include <stdio.h>

int main(void)
{
    int a;
    int MAX = 0;
    int MIN = 100;
    while(1)
    {
        scanf("%d", &a);
        if(a == 0)
        {
            break;
        }
        if(a > 0 && a < 100)
        {
            if(a > MAX)
            {
                MAX = a;
            }
            if(a < MIN)
            {
                MIN = a;
            }
        }
        
    }
    printf("MAX = %d\n", MAX);
    printf("MIN = %d\n", MIN);
    return 0;
}