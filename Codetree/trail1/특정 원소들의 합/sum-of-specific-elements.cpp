#include <iostream>
using namespace std;

int main() {
    int arr_2d[4][4];
    int sum = 0, mask = 0;
    for (int i = 0; i < 4; i++)
    {  
        for (int j = 0; j < 4; j++)
        {
            cin >> arr_2d[i][j];
            if (mask >= j)
            {
                sum += arr_2d[i][j];
            }
        }
        mask++;
    }
    cout << sum;
    // Please write your code here.
    return 0;
}