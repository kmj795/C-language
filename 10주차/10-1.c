#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    scanf("%c", &c);

    printf("문자: %c\n", c);

    printf("알파벳 여부: %s\n", isalpha(c) ? "예" : "아니요");
    printf("대문자 여부: %s\n", isupper(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", islower(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", isdigit(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", isalnum(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", isxdigit(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", ispunct(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", isprint(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", iscntrl(c) ? "예" : "아니요");
    printf("알파벳 여부: %s\n", isascii(c) ? "예" : "아니요");

    return 0;
}