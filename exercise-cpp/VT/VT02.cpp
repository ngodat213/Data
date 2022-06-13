#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> baseV;
    int n, baseN;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> baseN;
        baseV.push_back(baseN);
    }
    sort(baseV.begin(), baseV.end());
    if(baseV[n-1] != baseV[n-2]){
        cout << baseV[n-2];
    }else{
        cout << "NOT FOUND";
    }
    return 0;
}
