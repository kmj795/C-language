#include <stdio.h>

int main() {
    int n;
    double x, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &x);
        sum += x;
    }

    double avg = sum / n;

    printf("%.1f\n", avg);

    if (avg >= 80) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }

    return 0;
}