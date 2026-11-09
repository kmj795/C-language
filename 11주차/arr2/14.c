#include <stdio.h>

int main()
{
    int arr[4][2], total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            total += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", (arr[i][0] + arr[i][1]) / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += arr[i][j];
        }
        printf("%d ", sum / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);

    return 0;
}