#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, count_i(1), res(0);
    cin >> t;
    cin.ignore();
    string s;
    getline(cin ,s);
    char tg = s[0];
    for(int i = 1; i < t; i++){
        if(tg == s[i]){
            count_i++;
        }else{
            tg = s[i];
            if(count_i >= 2) res+=count_i/2;
            count_i = 1;
        }
    }
    if(count_i >= 2) res+=count_i/2;
    cout << res;
    return 0;
}
