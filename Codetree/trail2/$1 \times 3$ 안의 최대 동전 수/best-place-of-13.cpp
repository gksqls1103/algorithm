#include <iostream>
#include <algorithm>
using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];

    // Please write your code here.
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-2; j++)
        {
            result = max(result, grid[i][j] + grid[i][j+1] + grid[i][j+2]);
        }
    }
    cout << result;

    return 0;
}