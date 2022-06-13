#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // -10 -3 -2 1 2 3 4
    sort(arr, arr+n); // sorting a arr
    int max1 = arr[0]*arr[1]*arr[2];
    int max2 = arr[n-1]*arr[n-2]*arr[n-3];
    int max3 = arr[0]*arr[1]*arr[n-1];
    cout << max(max1,max(max2,max3));
    return 0;
}
