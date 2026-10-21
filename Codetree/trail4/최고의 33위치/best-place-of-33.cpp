#include <iostream>
#include <algorithm>
using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for(int i = 0; i < N -2; i++)
    {
        for(int j = 0; j < N -2; j++)
        {
            int temp = 0;
            for(int w_1 = 0; w_1 < 3; w_1++)
            {
                for(int w_2 = 0; w_2 < 3; w_2++)
                {
                    temp += grid[i+w_1][j+w_2];
                }
            }
            result = max(result,temp);
        }
    }

    
    cout << result;
    return 0;
}
