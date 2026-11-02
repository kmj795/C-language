#include <stdio.h>

int main(void)
{
    int a;
    int cnt = 0;
    int sum = 0;
    float avg = 0;
    while(1)
    {
        scanf("%d", &a);
        if(a == 0)
        {
            break;    
        }
        if(a > 0)
        {
            cnt++;
            sum += a;
            avg = sum/(float)cnt;
        }
    }
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);
}