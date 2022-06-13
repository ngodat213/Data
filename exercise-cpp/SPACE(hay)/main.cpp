#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        int count = 0;
        getline(cin ,str);
        for(int i = 0; i < str.length(); i++){
            if(str[i] == ' ' && str[i] != str[i+1]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
