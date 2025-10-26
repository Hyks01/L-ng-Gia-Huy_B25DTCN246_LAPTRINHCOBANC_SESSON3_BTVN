#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Nhap mot so nguyen co 4 chu so: ");
    if (scanf("%d", &n) != 1) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }

    int sign = (n < 0) ? -1 : 1;     
    int x = n * sign;                

    if (x < 1000 || x > 9999) {
        printf("Loi: so nhap vao phai co dung 4 chu so.\n");
        return 1;
    }

    int d1 = x % 10;      x /= 10;
    int d2 = x % 10;      x /= 10;
    int d3 = x % 10;      x /= 10;
    int d4 = x % 10;

    int rev_abs = d1*1000 + d2*100 + d3*10 + d4;

    if (sign < 0)
        printf("So nghich dao la: -%04d\n", rev_abs);
    else
        printf("So nghich dao la: %04d\n", rev_abs);

    return 0;
}
