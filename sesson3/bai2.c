#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("Nhap nhiet do (do Celsius): ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Loi: dau vao khong hop le.\n");
        return 1;
    }

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("=>> %.2f do Celsius = %.2f do Fahrenheit\n", celsius, fahrenheit);
    return 0;
}
