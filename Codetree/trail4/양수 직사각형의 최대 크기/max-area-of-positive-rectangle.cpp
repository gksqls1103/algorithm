#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int grid[20][20];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = -1;
    for(int r1 = 0; r1 < n; r1++)
    {
        for(int c1 = 0; c1 < m; c1++)
        {
            for(int r2 = r1; r2 < n; r2++)
            {
                for(int c2 = c1; c2 < m; c2++)
                {
                    int check = 1;
                    int cnt = 0;
                    for(int i = r1; i <= r2; i++)
                    {
                        for(int j = c1; j <= c2; j++)
                        {
                            cnt++;
                            if(grid[i][j] <= 0)
                            {check = -1;}
                        }
                    }
                    if (check == 1)
                    {
                        result = max(result, cnt);
                    }
                }
            }
        }
    }
    cout << result;

    return 0;
}
