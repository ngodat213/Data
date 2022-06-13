#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count_i = 0;
    bool b = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            if(!b){
                count_i++;
                b = true;
            }
        }else{
            b = false;
        }
    }
    cout << count_i;
    return 0;
}
