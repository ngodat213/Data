#include <bits/stdc++.h>

using namespace std;

string STR02(string arr){
    string s = arr;
    for(int i = 0; i < s.length(); i++){
        if(s[i] > 64 && s[i] < 91) s[i] += 32;
    }
    if(s[0] != 32 && s[0] > 96 && s[0] < 123) s[0] -= 32;
    for(int i = 0; i < s.length(); i++){
        if(s[i]==32&& s[i+1]!=32){
            if(s[i+1] > 96 && s[i+1] < 123){
                s[i+1] -= 32;
            }
        }
    }
    cout << s << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++){
        string s;
        getline(cin , s);
        STR02(s);
    }

    return 0;
}
