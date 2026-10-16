#include <iostream>

using namespace std;

bool is_grid(int x, int y, int n)
{
    if (x >= 0 && x < n && y >= 0 && y < n)
    {return true;}
    else
    {return false;}
}

int n;
int grid[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int cnt = 0, result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int w =0; w < 4; w++)
            {
                if(is_grid(i + dx[w], j + dy[w], n) && grid[i + dx[w]][j + dy[w]] == 1)
                {
                    cnt++;
                }

            }
            if(cnt>=3)
            {
                result++;
            }
            cnt = 0;
        }
    }

    cout << result;
    return 0;
}