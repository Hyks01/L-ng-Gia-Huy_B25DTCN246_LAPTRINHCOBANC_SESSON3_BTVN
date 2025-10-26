#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;

    printf("Nhap a = ");
    if (scanf("%d", &a) != 1) { puts("Loi: dau vao khong hop le."); return 1; }
    printf("Nhap b = ");
    if (scanf("%d", &b) != 1) { puts("Loi: dau vao khong hop le."); return 1; }

    if (a <= 0 || b <= 0) { puts("Loi: a, b phai la so nguyen duong."); return 1; }

    double S = sqrt((double)a + sqrt((double)b + 1.0))
             + sqrt((double)b + sqrt((double)a * a + (double)b * b));

    printf("S = %.2f\n", S);
    return 0;
}
