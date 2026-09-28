#include <stdio.h>

int main() {
    int a[100], n;
    long tong = 0;
    float tb;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // Nhap mang
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Tinh tong
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }

    tb = (float)tong / n;

    printf("Tong = %ld\n", tong);
    printf("TBC = %.2f\n", tb);

    return 0;
}