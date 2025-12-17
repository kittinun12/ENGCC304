#include <stdio.h>

int main() {
    int arr[] = {15, 7, 25, 3, 73, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp, pos = -1;
    int key = 32;

    // แสดงข้อมูลชุดเก่า
    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // เรียงลำดับจากน้อยไปมาก (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // หาตำแหน่งของเลข 32 หลังเรียงแล้ว
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    // แสดงข้อมูลชุดใหม่
    printf("New Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // แสดงตำแหน่งของ 32
    printf("Pos of %d : %d\n", key, pos);

    return 0;
}
