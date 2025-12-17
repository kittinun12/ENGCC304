#include <stdio.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
};
typedef struct Student S;

// ฟังก์ชันแปลงคะแนนเป็นเกรด
char getGrade(float score) {
    if (score >= 80)
        return 'A';
    else if (score >= 75)
        return '+';
    else if (score >= 70)
        return 'B';
    else if (score >= 65)
        return '+';
    else if (score >= 60)
        return 'C';
    else if (score >= 55)
        return '+';
    else if (score >= 50)
        return 'D';
    else
        return 'F';
}

// ฟังก์ชันแปลงคะแนนเป็นสัญลักษณ์เกรดแบบเต็ม (A, B+, C+, D+)
void printGrade(float score) {
    if (score >= 80)
        printf("A ");
    else if (score >= 75)
        printf("B+ ");
    else if (score >= 70)
        printf("B ");
    else if (score >= 65)
        printf("C+ ");
    else if (score >= 60)
        printf("C ");
    else if (score >= 55)
        printf("D+ ");
    else if (score >= 50)
        printf("D ");
    else
        printf("F ");
}

int main() {
    S students[3];
    int i;

    printf("Enter the details of 3 students:\n");

    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].Name);
        printf("ID: ");
        scanf("%s", students[i].ID);
        printf("Scores in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);
        printf("Scores in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);
        printf("Scores in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\n---------------------------\n");

    for (i = 0; i < 3; i++) {
        float avg = (students[i].ScoreSub1 + students[i].ScoreSub2 + students[i].ScoreSub3 +
                     students[i].ScoreSub4 + students[i].ScoreSub5) / 5.0;

        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
               students[i].ScoreSub1, students[i].ScoreSub2, students[i].ScoreSub3,
               students[i].ScoreSub4, students[i].ScoreSub5);
        printf("Grades: ");
        printGrade(students[i].ScoreSub1);
        printGrade(students[i].ScoreSub2);
        printGrade(students[i].ScoreSub3);
        printGrade(students[i].ScoreSub4);
        printGrade(students[i].ScoreSub5);
        printf("\nAverage Scores: %.1f\n\n", avg);
    }

    return 0;
}