#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;
    int key = 32;
    int pos = -1;

    // แสดงข้อมูลก่อนเรียง
    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // แสดงข้อมูลหลังเรียง
    printf("New Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // หาตำแหน่งของค่า key
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("Pos of %d : %d\n", key, pos);
    else
        printf("%d not found\n", key);

    return 0;
}
