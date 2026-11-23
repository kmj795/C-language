#include <stdio.h>

struct Person
{
char name[20];
int age;
};

int main(void)
{
    struct Person p1 = {"Yejun", 12};

    struct Person p2;
    scanf("%s", p2.name);
    scanf("%d", &p2.age);

    printf("Your name: %s", p1.name);
    printf(", age: %d\n", p1.age);
    printf("Friend's name: %s", p2.name);
    printf(", age: %d", p2.age);
}