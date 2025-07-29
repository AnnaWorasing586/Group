#include<iostream>
using namespace std;

int main() {
    int A = 0; //สร้างตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    cout << "Please enter a number for A: " << endl; //พิมพ์ข้อความเพื่อขอให้ผู้ใช้ป้อนค่าของ A
    cin >> A; //รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร A

    if (A == 8) { //ตรวจสอบว่า A เท่ากับ 8 หรือไม่
        cout << "A is 8" << endl;
    } else if (A > 8) { //ตรวจสอบว่า A มากกว่า 8 หรือไม่
        cout << "A is greater than 8" << endl;
    } else { //ถ้า A ไม่เท่ากับ 8 และไม่มากกว่า 8 แสดงว่า A น้อยกว่า 8
        cout << "A is less than 8" << endl;
    }

    return 0;
}