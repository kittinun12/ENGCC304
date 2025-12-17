#include <stdio.h>

int main() {
    int arr[100];    // เก็บค่าได้สูงสุด 100 ตัว
    int n = 0;
    int num;

    printf("Enter value: ");

    // รับค่าจำนวนเต็มทีละตัว จนกว่าจะเจอ EOF (เช่น กด Ctrl+Z บน Windows หรือ Ctrl+D บน Linux/Mac)
    while (scanf("%d", &num) == 1) {
        arr[n] = num;
        n++;
    }

    // ถ้าไม่มีข้อมูลเลย
    if (n == 0) {
        printf("No data entered.\n");
        return 0;
    }

    // แสดง index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดง array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // หาค่ามากสุดและน้อยสุด
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
