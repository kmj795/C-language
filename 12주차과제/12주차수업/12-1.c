#include <stdio.h>

int main() {
    FILE *filePtr;
    char filename[] = "example.txt";

    filePtr = fopen(filename, "w");
    
    if(filePtr == NULL) {
        printf("파일을 열 수 없습니다: %s\n", filename);
        return 1;
    }

    fprintf(filePtr, "Hello, world\n");

    return 0;
}