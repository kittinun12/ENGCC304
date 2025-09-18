#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Enter N : ");
    scanf("%d", &N);

    int arr[N];

    // รับค่าลงอาเรย์
    for (int i = 0; i < N; i++) {
        printf("Enter value[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // แสดงผล Index
    printf("\nIndex: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", i);
    }

    // แสดงผล Array โดยตรวจสอบจำนวนเฉพาะ
    printf("\nArray: ");
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
        else
            printf("# ");
    }

    return 0;
}
