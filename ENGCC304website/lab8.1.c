#include <stdio.h>

int main() {
    int position, years, projects;
    float baseSalary = 0, bonusYears = 0, bonusSpecial = 0, netSalary = 0;

    // Input
    printf("Position (1=Junior Programmer, 2=Mid-Level Programmer, 3=Senior Programmer): ");
    scanf("%d", &position);

    printf("Years of Experience: ");
    scanf("%d", &years);

    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);

    // Base salary by position
    if (position == 1) {
        baseSalary = 20000;
    } else if (position == 2) {
        baseSalary = 35000;
    } else if (position == 3) {
        baseSalary = 50000;
    } else {
        printf("Invalid position!\n");
        return 0;
    }

    // Bonus by years of experience
    if (years < 1) {
        bonusYears = 0;
    } else if (years >= 1 && years <= 3) {
        bonusYears = baseSalary * 0.10;
    } else if (years >= 4 && years <= 5) {
        bonusYears = baseSalary * 0.15;
    } else {
        bonusYears = baseSalary * 0.20;
    }

    // Special bonus for projects > 5
    if (projects > 5) {
        bonusSpecial = baseSalary * 0.05;
    }

    // Calculate net salary
    netSalary = baseSalary + bonusYears + bonusSpecial;

    // Output
    printf("\nBase Salary: %.0f THB\n", baseSalary);
    printf("Experience Bonus: %.0f THB\n", bonusYears);
    printf("Special Bonus: %.0f THB\n", bonusSpecial);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}
