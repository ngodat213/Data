#include <stdio.h>

void scanArray(int a[], int x){
    for(int i = 0; i < x; ++i){
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int x){
    printf("-->: ");
    for(int i = 0; i < x; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int searchFirst(int a[], int x){
    for(int i = 0; i < x; ++i){
        if(a[i] > 0) return i;
    }
    return -1;
}

int searchFinal(int a[], int x){
    for(int i = x-1; i >= 0; --i){
        if(a[i] > 0) return i;
    }
    return -1;
}

int maxArray(int a[], int x){
    int maxI = 0;
    for(int i = 1; i < x; i++){
        if(a[i] > a[maxI]) maxI = i;
    }
    return a[maxI];
}

int cntMax(int a[], int x){
    int maxA = maxArray(a, x), cnt = 0;
    for(int i = 0; i < x; ++i){
        if(a[i] == maxA) ++cnt;
    }
    return cnt;
}

int MaxIArray(int a[], int x){
    int maxN = maxArray(a, x);
    for(int i = 0; i < x; ++i){
        if(maxN == a[i]) return i;
    }
}

void InsertArray(int a[], int &x, int st, int n){
    for(int i = x-1; i >= st-1; --i){
        a[i+1] = a[i];
    }
    a[st] = n;
    ++x;
}

void DeleteArray(int a[], int &x, int vt){
    for(int i = vt; i < x; i++){
        a[i] = a[i+1];
    }
    --x;
}

int checkOdd(int a[], int x){
    for(int i = 0; i < x; ++i){
        if(a[i] % 2 != 0) return 1;
    }
    return 0;
}

int cntEven(int a[], int x){
    int cnt = 0;
    for(int i = 0; i < x; ++i){
        if(a[i] % 2 == 0) ++cnt;
    }
    return cnt;
}

void ArrayEven(int a[], int x, int b[], int n){
    int cnt = 0;
    for(int i = 0; i < x; ++i){
        if(a[i]%2==0) b[cnt++] = a[i];
        if(cnt == n) break;
    }
}

int main()
{
    int n;
    //a
    printf("a: Nhap n: ");
    while(n<1 || n>100){
        scanf("%d", &n);
    }
    int a[n], tg = 0, vt = 0;
    printf("Nhap mang: ");
    scanArray(a, n);
    //b
    printf("b: ");
    printArray(a, n);
    //c
    printf("c: Vi tri: %d, Gia tri: %d\n", searchFirst(a,n), a[searchFirst(a,n)]);
    //d
    printf("d: Vi tri: %d, Gia tri: %d\n", searchFinal(a,n), a[searchFinal(a,n)]);
    //e
    printf("e: Gia tri max: %d\n", maxArray(a,n));
    //f
    printf("f: So phan tu max: %d\n", cntMax(a,n));
    //g
    printf("g: Vi tri cac phan tu max: %d\n", MaxIArray(a,x));
    //h
    printf("h: Nhap phan tu can them vao: ");
    scanf("%d", &tg);
    InsertArray(a, n, 0, tg);
    printArray(a, n);
    //i
    printf("i: Nhap phan tu: ");
    scanf("%d", &tg);
    printf("Vi tri: ");
    scanf("%d", &vt);
    InsertArray(a, n, vt, tg);
    printArray(a, n);
    //j
    printf("j: Xoa pha tu dau tien: ");
    DeleteArray(a, n, 0);
    printArray(a, n);
    //k
    printf("k: Nhap vi tri: ");
    vt = 0;
    while(vt<1 || vt>n){
        scanf("%d", &vt);
    }
    DeleteArray(a, n, vt);
    printArray(a, n);
    //l
    if(checkOdd(a, n) == 1) printf("l: Co phan tu le trong mang\n");
    else printf("l: Khong co phan tu le trong mang\n");
    //m
    printf("m: Tao mang chan\n");
    int nB = cntEven(a, n);
    int b[nB];
    ArrayEven(a,n,b,nB);
    printArray(b, nB);
    return 0;
}
