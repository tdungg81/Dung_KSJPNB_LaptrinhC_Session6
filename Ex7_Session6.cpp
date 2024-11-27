#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    printf("Cav uoc cua %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


