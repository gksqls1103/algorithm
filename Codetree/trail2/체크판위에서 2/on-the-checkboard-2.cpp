#include <iostream>

using namespace std;

int R, C;
char grid[15][15];

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for(int i_1 = 1; i_1 < R-2; i_1++)
    {
        for(int j_1 = 1; j_1 < C-2; j_1++)
        {
            for(int i_2 = i_1 + 1; i_2 < R-1; i_2++)
            {
                for(int j_2 = j_1 + 1; j_2 < C-1; j_2++)
                {
                    if(grid[0][0] != grid[i_1][j_1] && grid[i_1][j_1] != grid[i_2][j_2] && grid[i_2][j_2] != grid[R-1][C-1])
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}