#include <iostream>

using namespace std;

int PASSW(string str){
    int m = str.length();
    int h(0), t(0), s(0), len;
    len = min(5, max(m-5,0));
    for(int i = 0; i < m; i++){
        if(str[i] > 64  && str[i] < 91 ) h=1;
        if(str[i] > 96  && str[i] < 123) t=1;
        if(str[i] > 47  && str[i] < 58)  s=1;
    }

    if(h+t+s == 3){
        return 5+len;
    }else{
        return  h+t+s+len;
    }

}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        cout << PASSW(str) << " ";
    }

    return 0;
}
