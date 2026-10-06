#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int size) {
    int i, j, key;

    // 두 번째 원소(인덱스 1)부터 시작하여 마지막 원소까지 반복
    for (i = 1; i < size; i++) {
        key = arr[i]; // 현재 삽입할 대상을 key에 저장
        j = i - 1;    // key의 바로 왼쪽 원소부터 비교 시작

        // 왼쪽 원소들이 key보다 크다면 오른쪽으로 한 칸씩 밀어냄
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key 값을 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 삽입 정렬 실행
    insertionSort(arr, size);

    printf("정렬 후 배열: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}