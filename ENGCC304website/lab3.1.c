#include <stdio.h>

int main() {
    float H, W, Area;

    printf("Enter H: ");
    scanf("%f", &H);

    printf("Enter W: ");
    scanf("%f", &W);

    Area = (H * W) / 2.0;

    printf("Area = %.1f\n", Area);

    return 0;
}
