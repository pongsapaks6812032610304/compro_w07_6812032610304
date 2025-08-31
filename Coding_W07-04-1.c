#include <stdio.h>

int main() {
    int level;  // ประกาศตัวแปรเพื่อเก็บระดับสมาชิก

    // แสดงข้อความให้ผู้ใช้กรอกระดับสมาชิก
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);  // รับค่าจากผู้ใช้เก็บไว้ในตัวแปร level

    // ตรวจสอบระดับสมาชิกด้วย if-else if
    if (level == 1) {
        // ถ้าระดับสมาชิกคือ 1
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        // ถ้าระดับสมาชิกคือ 2
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        // ถ้าระดับสมาชิกคือ 3
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        // ถ้าระดับสมาชิกคือ 4
        printf("Diamond Member: All benefits + VIP events\n");
    } else {
        // ถ้าใส่ค่าอื่นที่ไม่อยู่ในช่วง 1-4
        printf("Invalid membership level\n");
    }

    return 0;  // จบการทำงานของโปรแกรม
}
