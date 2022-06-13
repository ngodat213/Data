#include <bits/stdc++.h>

using namespace std;
#define FOR(n) for(int i = 0; i < n; i++)
int main()
{
    int arr[10000],count(0);
    int n;
    for(int i = 0; i < 10000; i++){
        cin >> n;
        if(n == 0) break;
        if(n < 0){
            arr[count++] = n;
        }
    }
    sort(arr, arr+n); // sorting a arr
    if(count == 0){
        cout << "NOT FOUND";
        return 0;
    }
    FOR(count){
        if(arr[i] < 0) cout << arr[i] << " ";
    }
    return 0;
}
