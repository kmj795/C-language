#include <stdio.h>

int main()
{
    int a[100];
    int n;
    int i = 0;
    int j; 
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        i++;
        a[i] = n;
    }
    for(j = i; j >= 1; j--)
        {
        printf("%d ", a[j]);
        }            
    return 0;
}