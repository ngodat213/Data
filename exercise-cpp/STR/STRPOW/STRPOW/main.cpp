#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1, res = "";
    int k;
    getline(cin, s);
    getline(cin, s1);
    cin >> k;
    for(int i = 0; i < k; i++){
        res+=s;
    }
    (s1.compare(res) == 0)? cout << "YES": cout << "NO";
    return 0;
}
