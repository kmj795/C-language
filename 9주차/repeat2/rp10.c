#include <stdio.h>

int main() {
    int x;
    int cnt3 = 0, cnt5 = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &x);
        if (x % 3 == 0) {
            cnt3++;
        }
        if (x % 5 == 0) {
            cnt5++;
        }
    }

    printf("Multiples of 3 : %d\n", cnt3);
    printf("Multiples of 5 : %d\n", cnt5);

    return 0;
}