#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        // i번째 줄에는 i개의 별을 출력
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // 줄바꿈
    }
    
    return 0;
}

