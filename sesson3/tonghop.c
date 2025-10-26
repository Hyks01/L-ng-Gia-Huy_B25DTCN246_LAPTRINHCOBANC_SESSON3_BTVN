#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;
    printf("Nhap a va b (nguyen duong): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }
    if (a <= 0 || b <= 0) {
        printf("Loi: a va b phai > 0.\n");
        return 1;
    }

    double S = sqrt((double)a * a + (double)b * b) / (a + b)
             + (sqrt((double)a) + sqrt((double)b)) / ((double)a * b);

    printf("S = %.2f\n", S);
    return 0;
}
