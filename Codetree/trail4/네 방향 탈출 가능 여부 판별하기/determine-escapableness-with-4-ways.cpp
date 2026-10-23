#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n, m;
int a[100][100];
int visited[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
queue<pair<int,int>> q;

bool Is_Grid(int x, int y)
{
    if(x<0 || x>=n || y<0 || y>=m)
    {
        return false;
    }
    return true;
}

void Bfs()
{
    while (!q.empty()) 
    {
        pair<int,int> curr_pos = q.front();
        q.pop();
        int curr_x = curr_pos.first;
        int curr_y = curr_pos.second;
        for(int i = 0; i < 4; i++)
        {
            if(Is_Grid(curr_x + dx[i], curr_y + dy[i]) && a[curr_x + dx[i]][curr_y + dy[i]] && !visited[curr_x + dx[i]][curr_y + dy[i]])
            {
                q.push({curr_x + dx[i], curr_y + dy[i]});
                visited[curr_x + dx[i]][curr_y + dy[i]] = 1;
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
    q.push({0,0});
    visited[0][0] = 1;
    Bfs();

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
