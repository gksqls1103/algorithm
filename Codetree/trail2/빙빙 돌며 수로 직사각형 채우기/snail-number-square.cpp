#include <iostream>

using namespace std;
bool is_grid(int x, int y, int n, int m)
{
    if (x >= 0 && x < n && y >= 0 && y < m)
    {return true;}
    else
    {return false;}
}

int n, m;
int arr[100][100];

int main() {
    cin >> n >> m;

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int cnt = 1, cur_x = 0, cur_y = 0, dir_i = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[cur_x][cur_y] = cnt;
            if(!is_grid(cur_x + dx[dir_i], cur_y + dy[dir_i], n, m) || arr[cur_x + dx[dir_i]][cur_y + dy[dir_i]] != 0)
            {
                dir_i = (dir_i + 1) % 4;
            }
            cur_x = cur_x + dx[dir_i];
            cur_y = cur_y + dy[dir_i];
            cnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}