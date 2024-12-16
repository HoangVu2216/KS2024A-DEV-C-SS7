#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 9, 7};
    int i, coSoChan = 0;

    printf("Cac so chan trong mang la:\n");
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            coSoChan = 1;
        }
    }

    if (!coSoChan) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

