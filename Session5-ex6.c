#include <stdio.h>
int main() {
    float a, b;
    int choice;
    while (1) {
        printf("nhap vao so thu nhat: ");
        scanf("%f", &a);
        printf("nhap vao so thu hai: ");
        scanf("%f", &b);
        printf("\ncalculator\n");
        printf("1 tong 2 so\n");
        printf("2 hieu 2 so\n");
        printf("3 tich 2 so\n");
        printf("4 thuong 2 so\n");
        printf("5 thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("tong 2 so: %f\n", a + b);
                break;
            case 2:
                printf("hieu 2 so: %f\n", a - b);
                break;
            case 3:
                printf("tich 2 so: %f\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("thuong 2 so: %f\n", a / b);
                } else {
                    printf("khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("thoat chuong trinh.\n");
                return 0; 
            default:
                printf("vui long chon lai.\n");
        }
        printf("\n");
    }

    return 0;
}
