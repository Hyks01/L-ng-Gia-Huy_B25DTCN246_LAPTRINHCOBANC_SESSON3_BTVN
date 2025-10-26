#include <stdio.h>

int main(void) {
    double toan, van, anh;

    printf("Nhap diem Toan, Van va Anh: ");
    if (scanf("%lf %lf %lf", &toan, &van, &anh) != 3) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }

    double tong = toan + van + anh;
    double trung_binh = tong / 3.0;

    printf("Tong diem = %.2f\n", tong);
    printf("Diem trung binh = %.2f\n", trung_binh);
    return 0;
}
