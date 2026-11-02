#include <stdio.h>

int main(void)
{
    int a;
    while (1)
    {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? \n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            printf("Seoul\n");
            break;
        case 2:
            printf("Washington\n");
            break;
        case 3:
            printf("Tokyo\n");
            break;
        case 4:
            printf("Beijing\n");
            break;
        }
        if(a < 1 || a > 4)
        {
            printf("none\n");
            break;
        }
        printf("\n");
    }
    return 0;
}