#include <stdio.h>  // เรียกใช้ไลบรารีสำหรับ input/output

int main() {
    int x, y;  // ประกาศตัวแปรจำนวนเต็ม x และ y

    // รับค่าจากผู้ใช้
    printf("Enter value for x: ");
    scanf("%d", &x);  // รับค่าที่ผู้ใช้ป้อนแล้วเก็บในตัวแปร x

    printf("Enter value for y: ");
    scanf("%d", &y);  // รับค่าที่ผู้ใช้ป้อนแล้วเก็บในตัวแปร y

    // เปรียบเทียบค่าของ x กับ y
    if (x > y) {
        printf("x is greater than y\n");  // ถ้า x มากกว่า y
    } else if (x < y) {
        printf("x is less than y\n");  // ถ้า x น้อยกว่า y
    } else {
        printf("x is equal to y\n");  // ถ้า x เท่ากับ y
    }

    return 0;  // จบโปรแกรม
}
