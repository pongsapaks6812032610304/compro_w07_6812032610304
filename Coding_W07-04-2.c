#include <stdio.h>

int main() {
    int level;  // ประกาศตัวแปรเพื่อเก็บระดับสมาชิก

    // แสดงข้อความให้ผู้ใช้กรอกระดับสมาชิก
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);  // รับค่าจากผู้ใช้เก็บไว้ในตัวแปร level

    // ใช้ switch-case เพื่อตรวจสอบระดับสมาชิก
    switch (level) {
        case 1:
            // กรณีสมาชิกระดับ 1
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            // กรณีสมาชิกระดับ 2
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            // กรณีสมาชิกระดับ 3
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            // กรณีสมาชิกระดับ 4
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            // กรณีที่ใส่ค่าผิด (ไม่ใช่ 1-4)
            printf("Invalid membership level\n");
    }

    return 0;  // จบการทำงานของโปรแกรม
}
