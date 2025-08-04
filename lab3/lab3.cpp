#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<int> arr(n); // ใช้ vector แทน array ปกติ

    // รับค่าจากผู้ใช้
    for (int i = 0; i < n; ++i) {
        cout << "Enter value[" << i << "]: ";
        cin >> arr[i];
    }

    // แสดงดัชนี
    cout << "Index:  ";
    for (int i = 0; i < n; ++i) {
        cout << setw(3) << i;
    }
    cout << endl;

    // แสดงค่า: ถ้าเป็นจำนวนเฉพาะ แสดงเลข; ถ้าไม่ใช่ แสดง #
    cout << "Array:  ";
    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            cout << setw(3) << arr[i];
        } else {
            cout << setw(3) << '#';
        }
    }
    cout << endl;

    return 0;
}
