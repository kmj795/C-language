#include <stdio.h>

int main(void)
{
    int n, sum = 0, cnt = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100) break;
        sum += n;
        cnt++;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", cnt > 0 ? (double)sum / cnt : 0.0);
    return 0;
}