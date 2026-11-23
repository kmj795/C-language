#include <stdio.h>

struct Person
{
    char name[21];
    int height;
};

int main(void)
{
    struct Person p[3];
    for(int i = 0; i < 3; i++)
    {
    scanf("%20s", p[i].name);
    scanf("%d", &p[i].height);

    printf("%s :",p[i].name);
    printf(" %dcm\n",p[i].height);
    }

}