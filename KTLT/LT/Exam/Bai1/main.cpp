#include<stdio.h>

void NhapSL(int *n){
    while(true){
        scanf("%d", n);
        if(*n > 0 && *n <= 100)
            break;
        NhapSL(n);
    }
}

void NhapMang(int *a, int n){
    if(n == 0) return;
    NhapMang(a, n-1);
    printf("a[%d]: ", n);
    scanf("%d", a+n);
}

void XuatMang(int *a, int n){
    if(n == 0) return;
    XuatMang(a, n-1);
    printf("a[%d]: %d\n", n, *(a+n));
}

int KiemTraLe(int *a, int n ,bool b = 1){
    if(n == 0 && b == 1) return 1;
    else if(b == 0)return 0;
    if(*(a+n) % 2 == 0) return KiemTraLe(a, n-1, 0);
    else KiemTraLe(a, n-1, 1);
}

int main(){
    int n;
    NhapSL(&n);
    int *a = new int[n];
    NhapMang(a, n);
    XuatMang(a, n);
    printf("Mang: %d", KiemTraLe(a, n));
    return 0;
}
