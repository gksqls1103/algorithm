#include <iostream>
#include <algorithm>
using namespace std;

int n;
int grid[20][20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            for(int a = 1; a < n; a++)
            {
                for(int b = 1; b < n; b++)
                {
                    int temp = 0;
                    if(i - a < 0 || j + a >= n || i-a - b < 0 || j+a -b >= n || j+a - b < 0 || i - b < 0 || j - b < 0)
                    {
                        break;
                    }
                    for(int a_in = 0; a_in < a+1; a_in++)
                    {
                        temp += grid[i - a_in][j + a_in];
                        temp += grid[i-b - a_in][j-b + a_in];
                    }
                    for(int b_in = 1; b_in < b; b_in++)
                    {
                        temp += grid[i - b_in][j - b_in];
                        temp += grid[i-a - b_in][j+a - b_in];
                    }
                    result = max(result, temp);
                }
            }
        }
    }
    cout << result;

    return 0;
}
