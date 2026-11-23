#include <stdio.h>

struct Person
{
    char name[20];
    char school[20];
    int grade;

};

int main(void)
{
    struct Person person1;

    scanf("%19s", person1.name);
    scanf("%19s", person1.school);
    scanf("%d", &person1.grade);

    printf("Name : %s\n",person1.name);
    printf("School : %s\n",person1.school);
    printf("Grade : %d\n",person1.grade);
}