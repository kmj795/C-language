#include <stdio.h>

int main()
{
    int arr[100], n = 2;

    arr[0] = 100;
    scanf("%d", &arr[1]);

    printf("%d %d ", arr[0], arr[1]);

    while (1) {
        arr[n] = arr[n - 2] - arr[n - 1];
        printf("%d ", arr[n]);
        if (arr[n] < 0) {
            break;
        }
        n++;
    }
    printf("\n");

    return 0;
}