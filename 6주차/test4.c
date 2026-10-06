#include <stdio.h>

int main(){

for(int i = 1; i <= 6; i++) {
    int s;

    if (i <= 3)
        s = i;
    else
        s = 6 - i;    
        
    for(int j = 1; j <= s; j++) {
    printf("*");

    }
    printf("\n");
}

return 0;
}