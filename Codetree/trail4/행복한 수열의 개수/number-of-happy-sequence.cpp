#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - m; j++)
        {
            int check_c = 1;
            for(int w = 0; w < m; w++)
            {
                if(grid[i][j] != grid[i][j+w])
                {
                    check_c = 0;
                }
            }
            if (check_c == 1)
            {
                result++;
                break;
            }
        }
        
        
        for (int j = 0; j <= n - m; j++)
        {
            int check_r = 1;
            for(int w = 0; w < m; w++)
            {
                if(grid[j][i] != grid[j+w][i])
                {
                    check_r = 0;
                }
            }
            if(check_r == 1)
            {
                result++;
                break;
            }
        }
        
        
    }

    cout << result;
    
    return 0;
}
