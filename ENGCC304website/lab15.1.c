#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int word_count = 0;
    int in_word = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        // ถ้าเป็นตัวอักษรหรือเลข -> ถือว่าอยู่ในคำ
        if (isalnum(ch)) {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            // เจอช่องว่างหรือเครื่องหมาย -> จบคำ
            in_word = 0;
        }
    }

    fclose(fp);

    printf("Total number of words in '%s' : %d words\n", filename, word_count);

    return 0;
}
