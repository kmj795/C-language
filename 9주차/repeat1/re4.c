#include <stdio.h>

int main(void)
{
    int num;
    int a = 0;
    int sum = 0;
    scanf("%d", &num);
    while(1)
    {   
        sum += a;
        a++;
        if(a == num+1)
        {
            break;
        } 
    }
    printf("%d", sum);
    return 0;
}