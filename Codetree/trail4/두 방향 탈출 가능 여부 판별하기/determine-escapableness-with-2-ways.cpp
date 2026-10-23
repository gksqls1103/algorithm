#include <iostream>

using namespace std;

int n, m;
int grid[100][100];
int visited[100][100];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
bool Is_grid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    return true;
}

void Dfs(int x, int y)
{
    visited[x][y] = 1;
    for(int i = 0; i < 2; i++)
    {
        if(Is_grid(x+dx[i], y+dy[i]) && grid[x+dx[i]][y+dy[i]] && !visited[x+dx[i]][y+dy[i]])
        {
            Dfs(x+dx[i], y+dy[i]);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    Dfs(0,0);

    if(visited[n-1][m-1])
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
