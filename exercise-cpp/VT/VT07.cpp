#include <iostream>

using namespace std;

int main()
{
    int arr[11],dem(0);
    for(int i = 0; i < 11; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] == arr[10]){
            cout << i+1 << " ";
            dem++;
        }
    }
    if(dem == 0)cout << "-1";
    return 0;
}
