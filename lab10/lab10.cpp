#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, len, isPalindrome = 1;

    printf("Enter word: ");
    scanf("%s", word);

    len = strlen(word);

    // ตรวจสอบจากหัว-ท้ายเข้ามา
    for (i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
