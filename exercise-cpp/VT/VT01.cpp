#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int maxINT;
    cin >> maxINT;
    for(long int i = 0; i <= n; i++)
    {
        cin >> i;
        if(i > maxINT) maxINT = i;
    }
    cout << maxINT;
}
