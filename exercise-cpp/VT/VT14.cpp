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
    sort(arr, arr+n); // sorting a arr
    int max1 = arr[0]*arr[1];
    int max2 = arr[n-1]*arr[n-2];
    cout << max(max1,max2);
    return 0;
}
