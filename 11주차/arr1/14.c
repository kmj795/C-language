#include <stdio.h>

int main()
{
    int arr[100], n = 0, x;

    while (n < 100) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        arr[n] = x;
        n++;
    }

    printf("%d\n", n);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");

    return 0;
}