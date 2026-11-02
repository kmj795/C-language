#include <stdio.h>

int main()
{
    int n, x;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%.2f", (double)sum / n);

    return 0;
}