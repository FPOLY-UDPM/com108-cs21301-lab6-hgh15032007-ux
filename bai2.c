/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
int main() {
    int n, i;
    printf("Nhập số phần tử: ");
    scanf("%d", &n);
    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhập mảng [%d]: ", i);
        scanf("%d", &mang[i]);
    }
    int max = mang[0];
    int min = mang[0];
    for(i = 1; i < n; i++) {
        if(mang[i] > max) {
            max = mang[i];
        }
        if(mang[i] < min) {
            min = mang[i]; 
        }
    }
    printf("\nGiá trị lớn nhất (Max) là: %d", max);
    printf("\nGiá trị nhỏ nhất (Min) là: %d", min);
    return 0;
}