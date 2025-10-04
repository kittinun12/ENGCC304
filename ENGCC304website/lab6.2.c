#include <stdio.h>

int main() {
    int N;

    printf("Enter value: ");
    scanf("%d", &N);

    printf("Series: ");

    if (N % 2 == 1) {  
        // N เป็นเลขคี่
        for (int i = 1; i <= N; i += 2) {
            printf("%d ", i);
        }
    } else {  
        // N เป็นเลขคู่
        for (int i = N; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
