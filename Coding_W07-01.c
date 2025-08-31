#include <stdio.h>

int main() {
    float midterm_score, bonus = 0, total_score;

    // รับค่าคะแนนสอบจากผู้ใช้
    printf("Enter midterm score: ");
    scanf("%f", &midterm_score);

    // ตรวจสอบว่าคะแนน >= 50 หรือไม่
    if (midterm_score >= 50) {
        bonus = midterm_score * 0.05;  // คำนวณโบนัส 5%
    }

    // คำนวณคะแนนรวม
    total_score = midterm_score + bonus;

    // แสดงคะแนนรวม
    printf("Total score after bonus: %.2f\n", total_score);

    // แสดงข้อความจบการประเมิน
    printf("End of evaluation\n");

    return 0;
}
