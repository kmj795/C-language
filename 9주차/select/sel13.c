#include <stdio.h>

int main()
{
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    int a;
    printf("Select: ");
    scanf("%d", &a);
    if(a == 1)
    {
        printf("You selected ADD.");
    }
    else if(a == 2)
    {
        printf("You selected EDIT.");
    }
    else if(a == 3)
    {
        printf("You selected DEL.");
    }
    else
    {
        printf("Wrong choice.");
    }
    return 0;
}