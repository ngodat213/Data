#include <iostream>

using namespace std;

bool palindrom(int n){
    int temp = n,sum = 0, res = 0, rem;
    while(temp) {
        rem = temp%10;
        sum += rem;
        res = res*10 + rem;
        temp/=10;

    }
    if(n == res && sum %10 == 0) return 1;
    return 0;
}

int main(){

    int l, r;
    while(cin >> l >> r){
        int count_i = 0;
        for(int i = l; i <= r; i++){
            if(palindrom(i)) count_i++;
        }
        cout << count_i << endl;
    }
}
