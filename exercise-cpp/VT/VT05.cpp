#include <iostream>

using namespace std;

int main()
{
    int n,f,tg,count = 0;
    cin >> n >> f;
    for(int i = 0; i < n; i++){
        cin >> tg;
        if(tg == f){
            count++;
        }
    }
    cout << count;
    return 0;
}
