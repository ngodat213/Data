#include <bits/stdc++.h>

using namespace std;

int main()
{
    // nhap case test
    int i,t;
    cin >> t;
    int height[t];
    for(i = 0; i < t; i++){
        cin >> height[i];
    }
    // sap xep case test
    sort(height, height+t);
    // tao hai mang arr1, arr2
    int arr1[t], arr2[t] = {0};
    arr1[0] = height[0];
    arr2[0] = 1;
    // dem mang
    int dem(0);
    for(i = 0; i < t; i++){
        if(arr1[dem] == height[i+1]){
            arr2[dem]++;
        }else{
            dem++;
            arr1[dem] = height[i+1];
            arr2[dem]++;
        }
    }
    // xu li su pho bien chieu cao
    // luu y neu 2 loai chieu cao bang nhau chon chieu cao lon nhat
    int ct(0);
    int maxA(0);
    for(i = 0; i < dem; i++){
        if(maxA < arr2[i]){
            maxA = arr2[i];
            ct = i;
        }
    }
    for(i = 0; i < dem; i++){
        if(maxA == arr2[i]){
            if(arr1[ct] < arr1[i]){
                ct = i;
                maxA = arr2[i];
            }
        }
    }
    cout << arr1[ct] << " " << arr2[ct];
    return 0;
}
