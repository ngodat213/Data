#include <iostream>
using namespace std;

int main()
{
    long int N,Sum;
    cin >> N;
    while(N > 0)
    {
         Sum += N % 10;
         N /= 10;
    }

    (Sum % 10 == 9)? cout << "YES" : cout << "NO";
}
