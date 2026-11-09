#include <stdio.h>

int main()
{
    int arr[6][7] = {0};

    arr[1][1] = 1;
    arr[1][3] = 1;
    arr[1][5] = 1;

    for (int i = 2; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
        }
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}