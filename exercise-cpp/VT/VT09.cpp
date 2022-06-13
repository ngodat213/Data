#include <bits/stdc++.h>
using namespace std;

#define FOR(n) for(int i = 0; i < n; i++)

bool isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void Delete(int &dem, int arr[]){
    for(int i = 0; i < dem; i++){
        for(int j = i + 1; j < dem; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < dem; k++){
                    arr[k] = arr[k+1];
                }
                dem--;
                j--;
            }
        }
    }
}
int main()
{
    int n,tg,dem(0);
    cin >> n;
    int arr[n];
    FOR(n){
        cin >> tg;
        if(isPrime(tg)){
            arr[dem] = tg;
            dem++;
        }
    }
    sort(arr, arr + dem);
    Delete(dem, arr);
    FOR(dem ) cout << arr[i] << " ";
    return 0;
}
