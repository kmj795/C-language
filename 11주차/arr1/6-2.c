#include <stdio.h>

int main()
{
    int arr[101], n = 0, x, max, min;

    while (1) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        arr[n] = x;
        n++;
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}