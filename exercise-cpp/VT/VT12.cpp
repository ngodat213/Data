#include <bits/stdc++.h>
using namespace std;

#define FOR(n) for(int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    FOR(n) cin >> arr[i];
    sort(arr, arr+n);
	cout << arr[n-1] - arr[0];
    return 0;

}
