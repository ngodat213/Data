#include <iostream>

using namespace std;

int main()
{
    int t,tr(0);
    cin >> t;
    cin.ignore();
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '-') tr++;
    }
    cout << tr << " " << t-tr;
    return 0;
}
