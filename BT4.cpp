#include <stdio.h>

int main() {
    int n, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang vua nhap la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

