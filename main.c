#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a;
int b;

int congHaiSo(a, b) {
    return a + b;
}

int hieuHaiSo(a, b) {
    return a - b;
}

float tichHaiSo(a, b) {
    return a * b;
}

float thuongHaiSo(a, b) {
    return (float) a / b;
}

int controller() {
    printf("\n");
    printf("Mời bạn nhập các số\n");
    printf("Vui lòng nhập số thứ nhất : ");
    scanf("%d", &a);
    printf("Vui lòng nhập số thứ hai : ");
    scanf("%d", &b);
}

int menu() {
    int choise;
    while (true) {
        printf("\n");
        printf("========Menu=======\n");
        printf("1. Nhập số\n");
        printf("2. Cộng hai số.\n");
        printf("3. Trừ hai số.\n");
        printf("4. Tích  hai số.\n");
        printf("5. Thương hai số.\n");
        printf("Vui lòng nhập lựa chọn của bạn:(1|2|3|4|5)\n");
        scanf("%d", &choise);
        switch (choise) {
            case 1:
                controller();
                break;
            case 2:
                printf("Tổng của hai số là: %d", congHaiSo(a, b));
                break;
            case 3:
                printf("Hiệu của hai số là: %d", hieuHaiSo(a, b));
                break;
            case 4:
                printf("Tích của hai số là: %.2f", tichHaiSo(a, b));
                break;
            case 5:
                if (b != 0) {
                    printf("Thương của hai số là: %.2f", thuongHaiSo(a, b));
                } else {
                    printf("Không thể chia một số cho 0!");
                }
                break;
            case 6:
                exit(1);
            default:
                printf("Bạn nhập sai mời bạn nhập lại.");
                break;
        }
    }
}

int main() {
    menu();
    return 0;

}