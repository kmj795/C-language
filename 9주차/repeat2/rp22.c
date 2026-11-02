#include <stdio.h>

int main()
{
    int a, b, temp;
    int sum = 0, cnt = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }

    printf("%d\n", sum);
    if (cnt > 0) {
        printf("%.1f\n", (double)sum / cnt);
    } else {
        printf("0.0\n");
    }

    return 0;
}