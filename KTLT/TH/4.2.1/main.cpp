#include <stdio.h>

void ScanArr(int a[], int n){
    if(n == 0)
        return;
    ScanArr(a, n-1);
    printf("a[%d]: ", n-1);
    scanf("%d", &a[n-1]);
}

void PrintArr(int a[], int n){
    if(n==0)
        return;
    PrintArr(a, n-1);
    printf("\na[%d]: %d", n-1, a[n-1]);
}

int SumArr(int a[], int n){
    if(n == 0)
        return 0;
    return SumArr(a, n-1) + a[n-1];
}

int SumEvenArr(int a[], int n){
    if(n == 0)
        return 0;
    if(a[n-1] % 2 == 0) return SumEvenArr(a, n-1) + a[n-1];
    else return SumEvenArr(a, n-1);
}

int Sum

int main()
{
    int a[100], n = 5;
    ScanArr(a,n);
    PrintArr(a, n);
    printf("\nTong cac phan tu trong mang: %d", SumArr(a, n));
    printf("\nTong cac phan tu chan trong mang: %d", SumEvenArr(a, n));
    return 0;
}
