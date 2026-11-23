#include <stdio.h>
#include <string.h>

struct Coordinate
{
    float xco;
    float yco;
};
int main(void)
{
    struct Coordinate c[2];
        for(int i=0; i<2; i++)
        {
           scanf("%f", &c[i].xco); 
           scanf("%f", &c[i].yco); 
        }
    printf("Center point = (%.1f, %.1f)\n",(c[0].xco + c[1].xco)/2, (c[0].yco + c[1].yco)/2);
}
