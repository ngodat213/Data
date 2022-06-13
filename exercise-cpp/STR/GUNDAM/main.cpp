#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char s[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> s[i][j];
        }
    }
    // **#
    // #**
    // su li ngang
    int count_x = 0;
    int count_y = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-1; j++){
            if(s[i][j] == s[i][j+1]){
                if(s[i][j] == '.' && s[i][j+1] == '.') count_x++;
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n-1; j++){
            if(s[j][i] == s[j+1][i]){
                if(s[j][i] == '.' && s[j+1][i] == '.') count_y++;
            }
        }
    }
    cout << count_x << endl << count_y;
    return 0;
}
