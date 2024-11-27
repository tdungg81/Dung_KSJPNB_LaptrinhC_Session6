#include <stdio.h>
#include <string.h>

int main() {
    char matkhaudung[] = "18";
    char dauvaomatkhau[50];

    printf("Nhap mat khau de mo: ");
    scanf("%s", dauvaomatkhau);

    if (strcmp(matkhaudung, dauvaomatkhau) == 0) {
        printf("Mat khau dung\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
