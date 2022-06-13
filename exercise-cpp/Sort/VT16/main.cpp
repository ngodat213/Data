#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int baseArr[n];
    for(int i = 0; i < n; i++){
        cin >> baseArr[i];
    }
    sort(baseArr, baseArr+ n); // sort an array
    for(int i = 0; i < n-1; i++){ // Remove duplicate elements in an Array
        if(baseArr[i]==baseArr[i+1]){
            for(int tg = i+1; tg < n; tg++){
                baseArr[tg] = baseArr[tg+1];
            }
            --n;
            --i;
        }
    }
    if(n < 2){
        cout << "NOT FOUND";
    }else{
        cout << baseArr[n-2];
    }
    return 0;
}
