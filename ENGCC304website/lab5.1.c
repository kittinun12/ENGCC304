#include <stdio.h>

int main() {
    char empID[11];     // เก็บรหัสพนักงาน (สูงสุด 10 ตัว + null terminator)
    int hours;
    float rate, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", empID);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    // คำนวณเงินเดือน
    salary = hours * rate;

    // แสดงผลตามรูปแบบโจทย์
    printf("----\n");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", empID);
    printf("Salary = US %.2f\n", salary);

    return 0;
}
