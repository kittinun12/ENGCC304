#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    temp = num;

    // หาจำนวนหลัก
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // คำนวณผลรวมของแต่ละหลักยกกำลังจำนวนหลัก
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // แสดงผลลัพธ์
    if (sum == num)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
