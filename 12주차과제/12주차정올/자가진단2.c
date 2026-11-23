#include <stdio.h>

struct School
{
    char name[30];
    int grade;
};

int main(void)
{
    struct School s1 = {"Jejuelementary", 6};

    struct School s2;
    scanf("%29s", s2.name);
    scanf("%d", &s2.grade);

    printf("%d grade in", s1.grade);
    printf(" %s School\n", s1.name);
    printf("%d grade in", s2.grade);
    printf(" %s School\n", s2.name);
}