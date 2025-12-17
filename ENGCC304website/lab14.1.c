#include <stdio.h>

int main() {
    int arr[100];      // กำหนดขนาด array สูงสุด 100
    int n = 0;         // ตัวนับจำนวนตัวเลขที่รับมา
    int num;

    printf("Enter value: ");

    // อ่านค่าจำนวนเต็มไปเรื่อย ๆ จนกว่าจะกด Ctrl+Z (Windows) หรือ Ctrl+D (Linux/Mac)
    while (scanf("%d", &num) == 1) {
        arr[n] = num;
        n++;
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดง Array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // คำนวณ Min และ Max
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Min : %d\n", min);
    printf("Max : %d\n", max);

    return 0;
}
