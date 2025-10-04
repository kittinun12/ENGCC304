#include <stdio.h>

int main() {
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    int arr[n];

    // รับค่าทีละตัว
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // แสดง Array โดยแทนเลขคี่ด้วย #
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
        else
            printf("# ");
    }

    printf("\n");
    return 0;
}
