#include <stdio.h>
int main() {
    int n;
    while (1) {
        printf("moi ban nhap so nguyen tu 1 den 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("moi ban nhap lai so nguyen tu 1 den 10\n");
        }
        printf("bang cuu chuong cua %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
