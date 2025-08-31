#include <stdio.h>

int main() {
    int age, vipLevel;
    float amount;
    int discount = 0;  // ส่วนลดเริ่มต้นเป็น 0%

    // รับข้อมูลจากผู้ใช้
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // ตรวจสอบเงื่อนไขส่วนลด
    if (age > 60 || (vipLevel == 3 || vipLevel == 4)) {
        // ถ้าอายุมากกว่า 60 ปี หรือ VIP ระดับ 3 หรือ 4 ได้ส่วนลด 20%
        discount = 20;
    } else if ((age >= 30 && age <= 40) && amount > 2000) {
        // ถ้าอายุระหว่าง 30-40 ปี และยอดซื้อเกิน 2,000 บาท ได้ส่วนลด 15%
        discount = 15;
    } else if ((age >= 18 && age <= 25) && amount > 1000) {
        // ถ้าอายุระหว่าง 18-25 ปี และยอดซื้อเกิน 1,000 บาท ได้ส่วนลด 10%
        discount = 10;
    } else if (vipLevel == 5 || amount > 50000) {
        // ถ้าเป็น VIP ระดับ 5 หรือยอดซื้อเกิน 50,000 บาท ได้ส่วนลด 25%
        discount = 25;
    }

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vipLevel, amount);

    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    return 0;
}
