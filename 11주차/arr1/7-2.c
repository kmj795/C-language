#include <stdio.h>

int main()
{
    int arr[10], sum = 0, odd = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            sum += arr[i];
        } else {
            odd += arr[i];
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", odd / 5.0);

    return 0;
}