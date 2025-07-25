#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูล
    char name[30];
    int age;
    float height;

    char subject;
    float grade;
    char symbol;

    // รับข้อมูลจากผู้ใช้
    scanf("%s %d %f", name, &age, &height);
    scanf(" %c %f %c", &subject, &grade, &symbol);  // มี space หน้าตัวแรกเพื่อข้าม newline

    // แสดงผล
    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}