#include <iostream>

using namespace std;

int main()
{
    string s, str = "";
    int sum(0);
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9') sum+= s[i]- '0';
        if(s[i] >= 'A' && s[i] <= 'z') str+=s[i];
    }
    cout << str << sum;
    return 0;
}
