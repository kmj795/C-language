#include <stdio.h>

int main()
{
    int arr[100], n = 0, x, count = 0, sum = 0;
    double avg = 0;

    while (n < 100) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        arr[n] = x;
        n++;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            count++;
            sum += arr[i];
        }
    }

    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}