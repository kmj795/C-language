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
    int min = 200;
    struct Person p[5];

    for(int i = 0; i < 5; i++)
    {
    scanf("%20s", p[i].name);
    scanf("%d", &p[i].score);
        if(p[i].score < min)
        {
            strcpy(phigh, p[i].name);
            min = p[i].score;
        }
    }
    printf("%s %d", phigh, min);

}