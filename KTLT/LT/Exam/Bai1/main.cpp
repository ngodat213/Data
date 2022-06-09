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
    scanf("%d", a+(n-1));
}

void XuatMang(int *a, int n){
    if(n == 0) return;
    XuatMang(a, n-1);
    printf("a[%d]: %d\n", n, *(a+(n-1)));
}

int KiemTraLe(int *a, int n){
    if(n == 0) return 1;
    if(*(a+(n-1)) % 2 == 0) return 0;
    return KiemTraLe(a, n-1);
}

int main(){
    int n;
    NhapSL(&n);
    int *a = new int[n];
    NhapMang(a, n);
    XuatMang(a, n);
    printf("Kiem tra le : %d", KiemTraLe(a, n));
    return 0;
}#include<stdio.h>

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
    scanf("%d", a+(n-1));
}

void XuatMang(int *a, int n){
    if(n == 0) return;
    XuatMang(a, n-1);
    printf("a[%d]: %d\n", n, *(a+(n-1)));
}

int KiemTraLe(int *a, int n){
    if(n == 0) return 1;
    if(*(a+(n-1)) % 2 == 0) return 0;
    return KiemTraLe(a, n-1);
}

int main(){
    int n;
    NhapSL(&n);
    int *a = new int[n];
    NhapMang(a, n);
    XuatMang(a, n);
    printf("Kiem tra le : %d", KiemTraLe(a, n));
    return 0;
}