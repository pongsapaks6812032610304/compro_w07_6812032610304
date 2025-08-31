#include <stdio.h>  // เรียกใช้ไลบรารีมาตรฐานสำหรับ input/output

int main() {
    int level;

    // รับค่าระดับ level จากผู้ใช้
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบค่าที่อยู่นอกช่วงก่อน
    if (level <= 0) {
        printf("The level below 1 is not allowed.\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed.\n");
    } else {
        // เงื่อนไขผ่านแล้ว ใช้ switch แสดงระดับตามค่าที่กรอก
        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
        }
    }

    return 0; // จบการทำงานของโปรแกรม
}
