#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int result[100][100];
int visited[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

queue <pair<int,int>> q;

bool Is_grid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
    {return false;}
    return true;
}
void Bfs(int x, int y)
{
    visited[x][y] = 1;
    q.push({x,y});
    result[x][y] = 0;
    while(!q.empty())
    {
        pair<int,int> curr_pos = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int next_x = curr_pos.first + dx[i];
            int next_y = curr_pos.second + dy[i];
            if(Is_grid(next_x, next_y) && a[next_x][next_y] && !visited[next_x][next_y])
            {
                visited[next_x][next_y] = 1;
                result[next_x][next_y] = result[curr_pos.first][curr_pos.second]+1;
                q.push({next_x, next_y});
            }
        }
    }
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = -1;
        }
    }

    Bfs(0,0);
    cout << result[n-1][m-1];
    return 0;
}
