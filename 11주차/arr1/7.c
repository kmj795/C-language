#include <stdio.h>

int main()
{
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", sum / 10.0);

    return 0;
}