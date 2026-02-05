/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>
int main () {
    int n=0;
    printf ("Mời nhập số phần tử: ");
    scanf ("%d",&n);
    int Arr [n], i;
    for ( i = 0; i < n; i++) {
    printf ("Nhập số ô thứ %d: ",i);
    scanf ("%d",&Arr[i]);
    }
    float tong=0, TrungBinh=0;
    int count=0;
    for (i = 0; i< n; i++) {
        if (Arr[i]%3==0) {
            tong += Arr[i];
            count++;
        }
    }
    if (count > 0) {
        TrungBinh = tong / count;
        printf("Trung bình các số chia hết cho 3: %.2f\n", TrungBinh);
    } else {
        printf("Không có số nào trong mảng chia hết cho 3.\n");
    }
    return 0;
}   

