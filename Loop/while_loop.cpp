#include <iostream>
using namespace std;

int main() {
  
  	// while loop to print numbers from 1 to 5
    int i = 0; //สร้างตัวแปร i และกำหนดค่าเริ่มต้นเป็น 0
    while (i < 5) { //ลูปจะทำงานตราบใดที่ i น้อยกว่า 5
        cout << "Hi  => i = " << i << endl; //พิมพ์ค่าของตัวแปร i และ ขึ้นบรรทัดใหม่หลังจากแสดงข้อความ
        i++; // i = i + 1   //เพิ่มค่า i ทีละ 1 หลังจากจบรอบของลูป
    }

    return 0;

    while (true) { //ลูปนี้จะทำงานตลอดไปจนกว่าจะมีการ break ออกจากลูป
        cout << "Hi => i = " << i << endl;
        i++;
    }
}






