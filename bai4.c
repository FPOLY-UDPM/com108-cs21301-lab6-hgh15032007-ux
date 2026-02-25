#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomMatrix(int n, int m, int mang[n][m], int min, int max) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mang[i][j] = rand() % (max - min + 1) + min;
        }
    }
}

int main() {
    int n, m;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int mang[n][m];
    srand(time(NULL));
    randomMatrix(n, m, mang, 1, 10);
    printf("\nMa tran ngau nhien vua tao:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", mang[i][j]);
        }
        printf("\n");
    }
    printf("\nMa tran sau khi binh phuong cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}