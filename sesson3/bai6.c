#include <stdio.h>

int main(void) {
    double day, cao;

    printf("Nhap do dai canh day va chieu cao: ");
    if (scanf("%lf %lf", &day, &cao) != 2) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }
    if (day < 0 || cao < 0) {
        printf("Loi: do dai va chieu cao phai >= 0.\n");
        return 1;
    }

    double dien_tich = 0.5 * day * cao;  // S = 1/2 * a * h
    printf("Dien tich tam giac = %.2f\n", dien_tich);
    return 0;
}
