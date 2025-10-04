#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int len, isPalindrome = 1;

    printf("Enter word: ");
    scanf("%s", word);

    // แปลงให้เป็นตัวพิมพ์เล็กทั้งหมด เพื่อไม่ให้ตัวใหญ่/เล็กมีผล
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }

    len = strlen(word);

    // ตรวจสอบ palindrome
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // แสดงผล
    if (isPalindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
