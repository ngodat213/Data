#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(s[0] != ' ') cout << s[0];
        int k = s.length();
        while(k--){
            if(s[k] != ' ') break;
        }
        for(int i = 1; i <= k; i++){
            if(s[i] != ' '){
                cout << s[i];
            }else{
                if(s[i-1] !=' '){
                    cout << s[i];
                }
            }

        }
        cout << endl;
    }
    return 0;
}
