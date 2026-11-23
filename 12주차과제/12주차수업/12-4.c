#include <stdio.h>

struct Student {
    char name[50];
    int score;
};

int main() {
    struct Student s;

    FILE *fp;
    FILE *pass, *fail;
    char filename[] = "students.txt";

    fp = fopen(filename, "w");

    if(fp == NULL) {
        printf("파일 열기 실패");
        return 1;
    }
    int count;
    printf("학생 수 입력: ");
    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        printf("\n%d번째 학생 이름 입력: ", i+1);
        scanf("%49s", s.name);
        printf("\n%d번째 학생 점수 입력: ", i+1);
        scanf("%d", &s.score);

        fprintf(fp, "%s %d\n", s.name, s.score);
    }

    fclose(fp);

    fp = fopen(filename, "r");
    pass = fopen("pass,txt", 'w');
    fail = fopen("fail.txt", "w");

    /*전부다 NULL일 때*/
    if((fp == NULL) || (pass == NULL) || (fail == NULL)) {
        /*파일 열기 오류 문자*/
        printf("파일 열기 실패");

        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

        return 1;
    }

    while(fscanf(fp, "%49s %d", s.name, s.score) == 2) {
        if(s.score >= 80) fprintf(pass, "%49s %d\n", s,name, s.score);
        else fprintf(fail, "%49s %d\n", s,name, s.score);
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("파일 저장 및 분류 완료");

    return 0;
}