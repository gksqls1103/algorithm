#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 2; j++)
        {
            int temp = 0;
            for (int w = 0; w < 3; w++)
            {
                temp += grid[i][j+w];
            }
            result = max(result, temp);
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n - 2; i++)
        {
            int temp = 0;
            for (int w = 0; w < 3; w++)
            {
                temp += grid[i+w][j];
            }
            result = max(result, temp);
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            int temp_vsum = 0;
            vector<int> temp_vector;
            for(int w_1 = 0; w_1 < 2; w_1++)
            {
                for(int w_2 = 0; w_2 < 2; w_2++)
                {
                    temp_vsum += grid[i+w_1][j+w_2];
                    temp_vector.push_back(grid[i+w_1][j+w_2]);
                }
            }
            for(int w_a = 0; w_a < 4; w_a++)
            {
                int temp = temp_vsum - temp_vector[w_a];
                result = max(result, temp);
            }
        }
    }
    cout << result;
    return 0;
}
