#include <stdio.h>

// 선택 정렬 함수
void selectionSort(int arr[], int size) {
    int i, j, min_idx, temp;

    // 마지막 원소를 제외하고 반복
    for (i = 0; i < size - 1; i++) {
        min_idx = i; // 현재 회차에서 가장 작은 것의 위치(인덱스)로 가정

        // 남은 원소들과 비교하여 더 작은 값이 있는지 탐색
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // 최솟값의 인덱스 갱신
            }
        }

        // 찾은 최솟값을 현재 위치(i)와 교환 (Swap)
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
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

    // 선택 정렬 실행
    selectionSort(arr, size);

    printf("정렬 후 배열: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}