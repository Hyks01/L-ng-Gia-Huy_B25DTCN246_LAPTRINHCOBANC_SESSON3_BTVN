#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    double r;
    printf("Nhap ban kinh hinh tron: ");
    if (scanf("%lf", &r) != 1) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }
    if (r < 0) {
        printf("Loi: ban kinh phai >= 0.\n");
        return 1;
    }

    double chu_vi = 2 * M_PI * r;
    double dien_tich = M_PI * r * r;

    printf("Chu vi = %.2f\n", chu_vi);
    printf("Dien tich = %.2f\n", dien_tich);
    return 0;
}
