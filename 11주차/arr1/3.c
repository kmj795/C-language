#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int i = 0; 
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        i++;
        a[i] = n;
        if(i % 2 != 0)
        {
            continue;
        }
        printf("%d ", a[i]);            
    }
    return 0;
}