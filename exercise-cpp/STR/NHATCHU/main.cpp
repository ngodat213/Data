#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool f[256] = {0};
    string s, res = "";
    getline(cin, s);
//    memset(f, 0, sizeof(f));
    for(int i = 0; i < s.length(); i++){
        if(f[s[i]] == 0){
            res += s[i];
            f[s[i]] = 1;
        }
    }
    cout << res;
    return 0;
}
