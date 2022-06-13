#include <iostream>

using namespace std;

int main()
{
    int t, n, m, count_i = 0;
    cin >> t;
    cin >> n;
    for(int i = 1; i < t; i++){
        cin >> m;
        if(m == n) count_i++;
        n = m;
    }
    cout << count_i;
    return 0;
}
