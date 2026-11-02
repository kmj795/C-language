#include <stdio.h>

int main(void)
{
int num = 1;
int sum = 0;
while(1)
{
    sum += num;
    num ++;
    if(num == 11)
    {
    break;
    }
}
printf("sum = %d\n", sum);
printf("num = %d", num);
}