#include <stdio.h>

int main() {
    int position, years, projects;
    int baseSalary = 0;
    int expBonus = 0;
    int specialBonus = 0;
    int netSalary;

    // Input
    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);

    printf("Years of Experience: ");
    scanf("%d", &years);

    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);

    // Base salary
    switch(position) {
        case 1: baseSalary = 20000; break;   // Junior Programmer
        case 2: baseSalary = 35000; break;   // Mid-Level Programmer
        case 3: baseSalary = 50000; break;   // Senior Programmer
        default: 
            printf("Invalid position!\n");
            return 0;
    }

    // Experience bonus
    if (years < 1) {
        expBonus = 0;
    } else if (years >= 1 && years <= 3) {
        expBonus = baseSalary * 0.10;
    } else if (years >= 4 && years <= 5) {
        expBonus = baseSalary * 0.15;
    } else {
        expBonus = baseSalary * 0.20;
    }

    // Special bonus
    if (projects > 5) {
        specialBonus = baseSalary * 0.05;
    }

    // Net salary
    netSalary = baseSalary + expBonus + specialBonus;

    // Output
    printf("\nBase Salary: %d THB\n", baseSalary);
    printf("Experience Bonus: %d THB\n", expBonus);
    printf("Special Bonus: %d THB\n", specialBonus);
    printf("Net Salary: %d THB\n", netSalary);

    return 0;
}
