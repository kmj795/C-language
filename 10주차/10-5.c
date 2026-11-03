#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == target) {
            return m; 
        }
        else if (arr[m] < target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n", target, result);
    }
    else {
        printf("원소를 찾지 못했습니다.\n");
    }
}