#include <stdio.h>

int main(void) {
    long long n;
    printf("Nhap n (>1): ");
    if (scanf("%lld", &n) != 1) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }
    if (n <= 1) {
        printf("Loi: n phai > 1.\n");
        return 1;
    }

    double A = 1.0 / ((double)(n - 1) * n)
             + 1.0 / ((double)n * (n + 1))
             + 1.0 / ((double)(n + 1) * (n + 2));

    printf("A = %.5f\n", A);
    return 0;
}
