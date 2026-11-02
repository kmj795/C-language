#include <stdio.h>

int main(void)
{
    double base, height;
    char c;
    while (1) {
        scanf("%lf %lf", &base, &height);
        printf("Triangle width = %.1f\n", base * height / 2);
        printf("Continue? ");
        scanf(" %c", &c);
        if (c != 'Y' && c != 'y') break;
    }
    return 0;
}