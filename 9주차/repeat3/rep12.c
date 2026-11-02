#include <stdio.h>

int main()
{
    int n;
    int num = 1;
    char c = 'A';
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1; j++) {
            if (j <= n - i + 1) {
                printf("%d ", num);
                num++;
            } else {
                printf("%c ", c);
                c++;
                if (c > 'Z') {
                    c = 'A';
                }
            }
        }
        printf("\n");
    }

    return 0;
}