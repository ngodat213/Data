#include <bits/stdc++.h>
using namespace std;
//int getOddOccurrence(bigint arr[], int t){
//    for(int i = 0; i < t; i++){
//        int count_i(0);
//        for(int j = 0; j < t; j++){
//            if(arr[i] == arr[j]){
//                count_i+=1;
//            }
//        }
//        if(count_i % 2 != 0){
//            return arr[i];
//            break;
//        }
//    }
//}


int main()
{
    int t;
    cin >> t;
    bigint arr[t];
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }
//    cout << getOddOccurrence(arr, t);
    return 0;
}

//int getOddOccurrence(bigint ar[], int ar_size){
//    int res = 0;
//    for (int i = 0; i < ar_size; i++)
//        res = res ^ ar[i];
//
//    return res;
//}
