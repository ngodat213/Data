#include <bits/stdc++.h>
using namespace std;

#define FOR(n) for(int i = 0; i < n; i++)
bool compare(int a, int b){
    return a > b;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    FOR(n) cin >> arr[i];
    sort(arr, arr+n,compare);
	FOR(n) cout << arr[i] << " ";
    return 0;
}
