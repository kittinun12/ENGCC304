#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value: ";
    cin >> N;

    cout << "Series: ";

    if (N % 2 == 1) {  // ถ้าเป็นเลขคี่
        for (int i = 1; i <= N; i += 2) {
            cout << i << " ";
        }
    } else {  // ถ้าเป็นเลขคู่
        for (int i = N; i >= 0; i -= 2) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
