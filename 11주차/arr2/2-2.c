#include <stdio.h>

int main()
{
    int count[10] = {0}, x;

    while (1) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        count[x / 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}