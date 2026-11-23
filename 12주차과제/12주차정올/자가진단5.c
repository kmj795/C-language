#include <stdio.h>
#include <string.h>

struct Person
{
    char name[21];
    int height;
    double weight;
};

int main(void)
{
    struct Person p[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%20s", p[i].name);
        scanf("%d", &p[i].height);
        scanf("%lf", &p[i].weight);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                struct Person temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %g\n", p[i].name, p[i].height, p[i].weight);
    }
}