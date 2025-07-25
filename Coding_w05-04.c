#include <stdio.h>

int main() {
    char name[3][50];
    int age[3];
    float height[3], weight[3];
    char grade[3];

    // รับค่าข้อมูลจากผู้ใช้
    for(int i = 0; i < 3; i++) {
        printf("Enter data for person %d:\n", i + 1);
        printf("Name Age Height(cm) Weight(kg) Grade: ");
        scanf("%s %d %f %f %c", name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงผลข้อมูลในรูปแบบตาราง
    printf("\n-----------------------------------------------\n");
    printf("| %-10s | %-3s | %-10s | %-10s | %-5s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade");
    printf("-----------------------------------------------\n");

    for(int i = 0; i < 3; i++) {
        printf("| %-10s | %-3d | %-10.1f | %-10.1f | %-5c |\n", 
               name[i], age[i], height[i], weight[i], grade[i]);
    }
    printf("-----------------------------------------------\n");

    return 0;
}