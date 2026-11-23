#include <stdio.h>

struct Person
{
    char name[50];
    int age;

};

int main(void)
{
    struct Person person1;

    scanf("%49s", person1.name);
    scanf("%d", &person1.age);

    printf("Your name is %s", person1.name);
    printf(" and you are %d years old.", person1.age);
}