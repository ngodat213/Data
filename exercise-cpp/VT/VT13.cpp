#include <iostream>
using namespace std;

int main()
{
    int n, maxSXY[3];
    cin >> n;
    int arr[n];
    // nhap arr,input elements into array
    for(int i = 0; i < n; i++) cin >> arr[i];
    // tim cap doi, find a couple
    maxSXY[0]= arr[0] + arr[1];
    maxSXY[1] = 0;
    maxSXY[2] = 1;

    for(int i = 1; i < n; i++){
        if(i == n-1){
            int sum = arr[n-1] + arr[0];
            if(sum > maxSXY[0]){
                maxSXY[0] = sum;
                maxSXY[1] = n-1;
                maxSXY[2] = 0;
            }
        }else{
            int sum = arr[i] + arr[i+1];
            if(sum > maxSXY[0]){
                maxSXY[0] = sum;
                maxSXY[1] = i;
                maxSXY[2] = i+1;
            }
        }
    }
    cout << arr[maxSXY[1]] << " " << arr[maxSXY[2]];
    return 0;
}
