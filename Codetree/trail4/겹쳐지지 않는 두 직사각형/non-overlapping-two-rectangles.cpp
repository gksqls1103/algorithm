#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n, m;
int grid[5][5];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = INT_MIN;
    
    for(int r1 = 0; r1 < n; r1++)
    {
        for(int c1 = 0; c1 < m; c1++)
        {
            for(int r2 = r1; r2 < n; r2++)
            {
                for(int c2 = c1; c2 < m; c2++)
                {
                    int sum_1 = 0;
                    for(int i = r1; i <= r2; i++)
                    {
                        for(int j = c1; j <= c2; j++)
                        {
                            sum_1 += grid[i][j];
                        }
                    }

                    for(int r3 = 0; r3 < n; r3++)
                    {
                        for(int c3 = 0; c3 < m; c3++)
                        {
                            for(int r4 = r3; r4 < n; r4++)
                            {
                                for(int c4 = c3; c4 < m; c4++)
                                {
                                    if(r2 < r3 || c2 < c3)
                                    {
                                        int sum_2 = 0;
                                        for(int i = r3; i <= r4; i++)
                                        {
                                            for(int j = c3; j <= c4; j++)
                                            {
                                                sum_2 += grid[i][j];
                                            }
                                        }
                                    result = max(result, sum_1 + sum_2);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}
