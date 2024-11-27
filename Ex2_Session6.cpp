#include <stdio.h>

int main() {
    int n[5];
    int sochan = 0, sole = 0;

    printf("Nhap 5 so nguye:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(n[i] % 2 == 0) {
            sochan++;
        } else {
            sole++;
        }
    }

    printf("So chan la: %d\n", sochan);
    printf("so le la: %d\n", sole);

    return 0;
}
