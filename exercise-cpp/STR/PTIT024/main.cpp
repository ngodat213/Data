#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    string s;
    getline(cin, s);
    for(int i = 2; i < s.length(); i++){
        if(isPrime(i)) {
            s[i] = '*';
        }
    }
    cout << s;
    return 0;
}
