#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a >= 90)
    {
        printf("Excellent");
    }
    else if(80 <= a && a < 90)
    {
        printf("Good");
    }
    else if(70 <= a && a < 80)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}