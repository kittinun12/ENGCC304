#include <stdio.h>

int main() {
    int num;
    char *words[] = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine", 
        "ten", "eleven", "twelve", "thirteen", "fourteen", 
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    printf("User Input : ");
    scanf("%d", &num);

    if (num >= 0 && num < 20) {
        printf("Result : %s\n", words[num]);
    } else {
        printf("Result : out of range\n");
    }

    return 0;
}
