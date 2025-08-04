#include <iostream>
#include <iomanip>    // สำหรับ setprecision
#include <string>     // สำหรับ string
using namespace std;

int main() {
    string employeeID;
    int hours;
    double salaryPerHour;

    // รับข้อมูล
    cout << "Input the Employees ID(Max. 10 chars): ";
    cin >> employeeID;

    cout << "Input the working hrs: ";
    cin >> hours;

    cout << "Salary amount/hr: ";
    cin >> salaryPerHour;

    // คำนวณเงินเดือน
    double totalSalary = hours * salaryPerHour;

    // แสดงผล
    cout << fixed << setprecision(2); // แสดงทศนิยม 2 ตำแหน่ง
    cout << "Employees ID = " << employeeID << endl;
    cout << "Salary = U$ " << totalSalary << endl;

    return 0;
}
