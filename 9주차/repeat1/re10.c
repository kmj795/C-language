#include <stdio.h>

int main(void)
{
    int a;
    while(1)
    {
        scanf("%d", &a);
        if(a == -1)
        {
            break;
        }
        if(a % 3 == 0)
        {
            printf("%d\n", a/3);       
        }
        else
        {
            continue;
        }
    }
    return 0;
}
