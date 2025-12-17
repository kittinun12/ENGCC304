#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int inWord = 0;      // ตัวบอกสถานะว่ากำลังอยู่ในคำ
    int wordCount = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // ถ้าเป็นตัวอักษร
            if (!inWord) { 
                inWord = 1;
                wordCount++;
            }
        } else {
            inWord = 0;  // ถ้าไม่ใช่ตัวอักษร ถือว่าคำสิ้นสุด
        }
    }

    fclose(fp);
    printf("Total number of words in '%s' : %d words\n", filename, wordCount);

    return 0;
}
