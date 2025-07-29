#include<iostream>
using namespace std;

int main (){ 
    int A = 0; //สร้างตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    cout<<"Please enter a number to A: "<< endl;
    cin >> A; //รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร A

    if(A<5){ //ตรวจสอบว่า A น้อยกว่า 5 หรือไม่
        cout<<"Condition met"<<endl;
    }
    
    return 0;
}