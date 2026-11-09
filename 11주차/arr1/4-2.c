#include <stdio.h>

int main()
{
    double a[7] = {0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int b,c;
    double d = 0;
    scanf("%d %d", &b, &c);
    d = a[b] + a[c];
    printf("%.1f", d);
    return 0;
}