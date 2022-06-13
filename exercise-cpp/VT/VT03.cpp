#include <iostream>

using namespace std;

int main()
{
    int n, maxN,cs;
    cin >> n;
    int a[n];
    cin >> a[0];
    maxN = a[0]; cs = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(maxN < a[i]){
            maxN = a[i];
            cs = i;
        }
    }
    cout << cs;
    return 0;
}
