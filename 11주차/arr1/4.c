#include <stdio.h>

int main()
{
    int a[12];
    int n;
    int i = 0;
    while(1)
    {
        scanf("%d", &n);
        if(n < 1 || n > 12)
        {
        break;
        }
        switch(n)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("31\n");
            break;

            case 2:
            printf("28\n");
            break;

            case 4:
            case 6:
            case 9:
            case 11:
            printf("30\n");
            break;
        }
    }            
    return 0;
}