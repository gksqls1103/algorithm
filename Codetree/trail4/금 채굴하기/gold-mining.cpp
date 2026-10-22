#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int grid[20][20];

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
        for (int j = 0; j < n; j++)
        {
            for (int ma = 0; ma <2*n; ma++)
            {
                int cnt_g = 0;
                for (int k_1 = 0; k_1 < n; k_1++)
                {
                    for(int k_2 = 0; k_2 < n; k_2++)
                    {
                        if(abs(i - k_1)+ abs(j - k_2) <= ma)
                        {
                            cnt_g += grid[k_1][k_2];
                        }
                    }
                }
                if((cnt_g * m) >= ma*ma + (ma+1)*(ma+1))
                {
                    result = max(result, cnt_g);
                }
            }
        }
    }
    cout << result;
    return 0;
}
