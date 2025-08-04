#include <iostream>
using namespace std;

int main() {
    int score;

    // รับค่าคะแนนจากผู้ใช้
    cout << "Enter your score (0 - 100): ";
    cin >> score;

    // ตรวจสอบเกรดโดยใช้ if...else เท่านั้น
    if (score < 50) {
        cout << "Grade: F" << endl;
    } else if (score < 55) {
        cout << "Grade: D" << endl;
    } else if (score < 60) {
        cout << "Grade: D+" << endl;
    } else if (score < 65) {
        cout << "Grade: C" << endl;
    } else if (score < 70) {
        cout << "Grade: C+" << endl;
    } else if (score < 75) {
        cout << "Grade: B" << endl;
    } else if (score < 80) {
        cout << "Grade: B+" << endl;
    } else {
        cout << "Grade: A" << endl;
    }

    return 0;
}
