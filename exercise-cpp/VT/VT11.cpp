#include <bits/stdc++.h>
using namespace std;

#define FOR(n) for(int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    int arr[n];
    FOR(n) cin >> arr[i];
    sort(arr+1, arr+n-1);
	FOR(n) cout << arr[i] << " ";
    return 0;
}
