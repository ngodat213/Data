#include <bits/stdc++.h>

using namespace std;

int main()
{
    // nhap chuoi can tim
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    int t;
    cin >> t;
    char f[t];
    for(int i = 0; i < t; i++){
        cin >> f[i];
        if(f[i] >= 'A' && f[i] <= 'Z') f[i] += 32;
    }
    // giai bai tap
    int count_i = 0;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < str.length(); j++){
            if(f[i] == str[j]) count_i++;
        }
        cout << count_i << endl;
        count_i = 0;
    }
    return 0;
}
