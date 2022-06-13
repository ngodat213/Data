#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string c = "0123456789abcdefghijklmnopqrstuvwxyz";
    int count_str[36] = {0};
    getline(cin, s);
    // chuyen thuong
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    // dem
    for(int i =0; i < 36; i++){
        for(int j=0; j<s.length(); j++){
            if(c[i] == s[j]) count_str[i]++;
        }
    }
    for(int i = 0; i < 36; i++){
        if(count_str[i] != 0){
            cout << c[i] << " " << count_str[i] << endl;
        }
    }

    return 0;
}
