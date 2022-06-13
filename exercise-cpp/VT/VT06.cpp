#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,dem(0),tg;
    float sum(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tg;
        if(tg % 2 != 0){
            sum += tg;
            count++;
        }
    }
    cout << setprecision(4) << fixed << (sum/count);
    return 0;
}
