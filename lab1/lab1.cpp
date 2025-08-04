#include <iostream>
#include <string>  // ใช้สำหรับ string
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);  // รับชื่อทั้งบรรทัด รองรับช่องว่าง

    cout << "Enter your age: ";
    cin >> age;

    cout << "- - - - - -" << endl;
    cout << "Hello " << name << endl;
    cout << "Age = " << age << endl;

    return 0;
}
