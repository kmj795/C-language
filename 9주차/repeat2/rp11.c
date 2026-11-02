#include <stdio.h>

int main() {
    int x;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        sum += x;
    }

    double avg = sum / 5.0;

    printf("%d\n", sum);
    printf("%.1f\n", avg);

    return 0;
}