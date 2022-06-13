#include <iostream>

using namespace std;

int main()
{
    int n,f,tg;
    cin >> n >> f;
    for(int i = 0; i < n; i++){
        cin >> tg;
        if(tg == f){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
