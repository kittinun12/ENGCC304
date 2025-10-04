#include <stdio.h>

// ฟังก์ชันสลับค่าด้วย pointer
void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // รับค่าจากผู้ใช้
    printf("Enter num1 : ");
    scanf("%d", &num1);

    printf("Enter num2 : ");
    scanf("%d", &num2);

    // ให้ pointer ชี้ไปที่ตัวแปร
    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);

    // เรียกใช้ฟังก์ชัน swapNumbers
    swapNumbers(ptr1, ptr2);

    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);

    return 0;
}
