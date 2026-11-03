#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    int len = strlen(str1);
    printf("str1의 길이 %d\n", len);

    /*
    * strcpy(char *dest, const char *src) -> dset = src;
    ! 버퍼 오버런 주의
    ! 메모리 중첩 주의
    */
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str3, str2, n);
    str3[n] ='\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    /*
    * int strcmp(const char *lhs, const char *rhs);
    ! 대소문자 구분
    ! 널 포인터 검사
    */
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    /*
    * int strncmp(const char *lhs, const char *rhs, size_t count);
    ! Prefix 확인
    ! 대소문자 구분
    */
    printf("str1과 str2의 첫 %d 문자 비교 %d\n", n, strncmp(str1, str2, n));

    /*
    *char *strcat(char *dest, const char *src);
    ! 버퍼 오버런
    ! 메모리 중첩 금지
    */
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    strncat(str1, str2, n);
    printf("str2의 첫 %d 문자를 str3에 연결: %s\n", n, str3);

    char *ptr_c = strchr(str1, ch);
    printf("str1에서 '%c'의 첫 번째 출현: %s\n", ch, ptr_c);

    char *ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");

    return 0;
}