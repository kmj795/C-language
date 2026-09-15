#pragma waring(disable:4996)
#include <stdio.h>

int main()
{
    int number;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &number);

    printf("%s", (number%2==0)?"Even":"Odd");

    return 0;

    
}