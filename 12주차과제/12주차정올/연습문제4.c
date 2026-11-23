#include <stdio.h>
#include <string.h>

struct Person
{
    char name[21];
    int score;
};

int main(void)
{
    char phigh[21];
    int max = 0;
    struct Person p[5];

    for(int i = 0; i < 5; i++)
    {
    scanf("%20s", p[i].name);
    scanf("%d", &p[i].score);
        if(p[i].score > max)
        {
            strcpy(phigh, p[i].name);
            max = p[i].score;
        }
    }
    printf("%s %d", phigh, max);

}