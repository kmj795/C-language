#include <stdio.h>

int main()
{
    int score, sum;
    double avg;

    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            sum += score;
        }
        avg = (int)(sum * 10 / 4.0 + 0.5) / 10.0;
        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}