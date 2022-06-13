#include <stdio.h>

int main() {
    int n, a, b, res1, res2;
    scanf("%d%d%d", &n, &a, &b);
    res1 = a*n;

    if(n%2==0)res2 = (n/2)*b;
    else res2 = (n/2)*b + a;

    if(res1 < res2) printf("%d", res1);
    else printf("%d", res2);
    return 0;
}