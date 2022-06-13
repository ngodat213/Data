#include <iostream>

using namespace std;

#define MAXA  10000
#define FOR(a) for(int i = 0; i < a; i++)

int main()
{
    int n, arr[MAXA];
    cin >> n;
    FOR(n) cin >> arr[i];
    FOR(n){
        if(i % 2 != 0) {
            arr[i] += abs(arr[i+1] - arr[i-1]);
        }
        cout << arr[i] << " ";
    }
    return 0;
}
