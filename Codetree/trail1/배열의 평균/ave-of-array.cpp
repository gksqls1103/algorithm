#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed << setprecision(1);
    int arri_2d[2][4];
    float r_sum = 0, c_sum = 0, sum = 0;
    for (int i = 0; i < 2; i++)
    {
        r_sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> arri_2d[i][j];
            sum += arri_2d[i][j];
            r_sum += arri_2d[i][j];
        }
        cout << r_sum / 4.0 << ' ';
    }
    cout << '\n';

    for (int j = 0; j < 4; j++)
    {
        c_sum = 0;
        for (int i = 0; i < 2; i++)
        {
            c_sum += arri_2d[i][j];
        }
        cout << c_sum / 2.0 << ' ';
    }
    cout << '\n';
    cout << sum /8.0;

    return 0;
}