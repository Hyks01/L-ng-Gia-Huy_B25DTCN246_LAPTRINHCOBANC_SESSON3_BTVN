#include <stdio.h>

typedef struct {
    const char *name;
    int age;
    const char *phone;
    const char *email;
} Student;

void repeat(char c, int n) {
    while (n--) putchar(c);
}

void print_sep(int w1, int w2, int w3, int w4, int w5) {
    putchar('|');
    repeat('-', w1 + 2); putchar('|');
    repeat('-', w2 + 2); putchar('|');
    repeat('-', w3 + 2); putchar('|');
    repeat('-', w4 + 2); putchar('|');
    repeat('-', w5 + 2); putchar('|');
    putchar('\n');
}

int main(void) {
    Student a[] = {
        {"Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {"Nguyen Van B", 21, "0904488482", "bnv@rikkeiacademy.com"},
        {"Nguyen Van C", 19, "0904488483", "cnv@rikkeiacademy.com"},
        {"Nguyen Van D", 18, "0904488484", "dnv@rikkeiacademy.com"},
        {"Nguyen Van E", 22, "0904488485", "env@rikkeiacademy.com"},
        {"Nguyen Van F", 20, "0904488486", "fnv@rikkeiacademy.com"},
        {"Nguyen Van G", 23, "0904488487", "gnv@rikkeiacademy.com"},
        {"Nguyen Van H", 19, "0904488488", "hnv@rikkeiacademy.com"},
        {"Nguyen Van I", 18, "0904488489", "inv@rikkeiacademy.com"},
        {"Nguyen Van K", 21, "0904488480", "knv@rikkeiacademy.com"},
    };
    int n = sizeof(a)/sizeof(a[0]);

    /* độ rộng cột */
    const int W_STT = 4, W_NAME = 16, W_AGE = 4, W_PHONE = 12, W_EMAIL = 24;

    /* Tiêu đề */
    printf("\n");
    repeat(' ', 18); printf("DANH SACH SINH VIEN\n");

    /* Header */
    print_sep(W_STT, W_NAME, W_AGE, W_PHONE, W_EMAIL);
    printf("| %-*s | %-*s | %-*s | %-*s | %-*s |\n",
           W_STT, "STT",
           W_NAME, "Ho va ten",
           W_AGE, "Tuoi",
           W_PHONE, "So dien thoai",
           W_EMAIL, "email");
    print_sep(W_STT, W_NAME, W_AGE, W_PHONE, W_EMAIL);

    /* Dòng dữ liệu */
    for (int i = 0; i < n; ++i) {
        printf("| %-*d | %-*s | %-*d | %-*s | %-*s |\n",
               W_STT, i + 1,
               W_NAME, a[i].name,
               W_AGE, a[i].age,
               W_PHONE, a[i].phone,
               W_EMAIL, a[i].email);
        print_sep(W_STT, W_NAME, W_AGE, W_PHONE, W_EMAIL);
    }

    return 0;
}
