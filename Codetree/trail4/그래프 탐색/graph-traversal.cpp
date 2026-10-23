#include <iostream>

using namespace std;

int n, m;
int from[10000], to[10000];
int grid[1005][1005];
int visited[1005];
void DFS(int curr_v)
{
    visited[curr_v] = 1;
    for(int next_v = 1; next_v <= n; next_v++)
    {
        if(grid[curr_v][next_v] && !visited[next_v])
        {
            DFS(next_v);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
    }

    // Please write your code here.
    for(int i = 0; i < m; i++)
    {
        grid[from[i]][to[i]] = 1;
        grid[to[i]][from[i]] = 1;
    }

    DFS(1);
    
    int result = 0;
    for(int i = 2; i <= 1000; i++)
    {
        if(visited[i]) result++;
    }

    cout << result;

    return 0;
}
