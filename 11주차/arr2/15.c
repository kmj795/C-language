#include <stdio.h>

int main()
{
    int arr[10][10] = {0}, n;

    scanf("%d", &n);

    arr[0][0] = 1;

    for (int i = 1; i < n; i++) {
        arr[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}