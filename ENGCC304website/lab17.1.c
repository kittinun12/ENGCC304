#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// สร้าง struct เก็บข้อมูลหนังสือ
typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
} Book;

// ฟังก์ชันเพิ่มหนังสือ
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // เคลียร์ buffer

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0;

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("\nBook added successfully!\n\n");
}

// ฟังก์ชันค้นหาหนังสือจากชื่อ
void searchBook(Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("\nBook ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n\n", books[i].year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nBook not found.\n\n");
    }
}

// ฟังก์ชันแสดงหนังสือทั้งหมด
void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("\nNo books in the library.\n\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
    }
    printf("\n");
}

int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int option;
    char searchTitle[100];

    do {
        printf("Choose an option:\n");
        printf("1. Add a new book\n");
        printf("2. Search for a book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar(); // เคลียร์ buffer

        switch (option) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = 0;
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Try again.\n\n");
        }
    } while (option != 4);

    return 0;
}