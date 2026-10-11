#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char chararr_2d[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> chararr_2d[i][j];
            chararr_2d[i][j] -= 32;
            cout << chararr_2d[i][j] << ' ' ;
        }
        cout << '\n';
    }
    return 0;
}