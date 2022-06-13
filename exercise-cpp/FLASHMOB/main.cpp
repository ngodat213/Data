#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> set1;
    set1.insert(n);
    for(int i = 0; i < k; i++){
        int a, b;
        cin >> a >> b;
        if(b == n){
            set1.insert(a);
            n = a;
        }
    }
    cout << n << " " << set1.size();
    return 0;
}
