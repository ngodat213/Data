#include <stdio.h>

int main() {
    // 6 6 4
    long long n,m,a, res1,res2;
    scanf("%lld%lld%lld", &n,&m,&a);
    if(n%a) res1 = n/a+1;
    else res1 = n/a;

    if(m%a) res2 = m/a+1;
    else res2 = m/a;

    printf("%d", res1*res2);

    return 0;
}