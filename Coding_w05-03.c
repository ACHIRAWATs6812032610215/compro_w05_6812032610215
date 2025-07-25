#include <stdio.h>

int main() {
    // บรรทัดที่ 1
    int a[] = {0, 1, 7};  
    printf("a = \t");
    for (int i = 0; i < 7; i++) {
        if (i == 1 || i == 2 || i == 3) {
            printf("%d\t", a[i - 1]);  // index -1 เพราะเริ่มแสดงจาก index 1
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    // บรรทัดที่ 2
    int b[] = {2, 5};
    printf("b = \t");
    for (int i = 0; i < 7; i++) {
        if (i == 1 || i == 2) {
            printf("%d\t", b[i - 1]);
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    // บรรทัดที่ 3
    int c[] = {1, 9};
    printf("c = \t");
    for (int i = 0; i < 7; i++) {
        if (i == 0 || i == 1) {
            printf("%d\t", c[i]);
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    // บรรทัดที่ 4
    int d[] = {9, 5};
    printf("d = \t");
    for (int i = 0; i < 7; i++) {
        if (i == 2 || i == 3) {
            printf("%d\t", d[i - 2]);
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    // บรรทัดที่ 5
    int e[] = {1, 2, 5};
    printf("e = \t");
    for (int i = 0; i < 7; i++) {
        if (i >= 2 && i <= 4) {
            printf("%d\t", e[i - 2]);
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    // บรรทัดที่ 6
    int f[] = {4, 5};
    printf("f = \t");
    for (int i = 0; i < 7; i++) {
        if (i == 5 || i == 6) {
            printf("%d\t", f[i - 5]);
        } else {
            printf("0\t");
        }
    }
    printf("\n");

    return 0;
}