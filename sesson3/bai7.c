#include <stdio.h>
    int main() {
        int n, sum = 0;
        printf("nhap so nguyen co 4 chu so: ");
        scanf("%d", &n);
        sum += n % 10;
        n/= 10;
        sum += n % 10;
        n/= 10;
        sum += n % 10;
        n/= 10;
        sum += n % 10;
        printf("tong cac chu so = %d\n", sum); 
        return 0;
    }