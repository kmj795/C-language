#include <stdio.h>

int main()
{
    int count[11] = {0}, x;

    while (1) {
        scanf("%d", &x);
        if (x < 1 || x > 10) {
            break;
        }
        count[x]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}