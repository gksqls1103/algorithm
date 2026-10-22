#include <iostream>

using namespace std;

int n, m, t;
int a[20][20];
int r[400], c[400];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool Is_Grid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= n)
    {return false;}
    return true;
}

int main() {
    cin >> n >> m >> t;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i];
    }

    // Please write your code here.
    int curr[n][n] = {};
    int next[n][n] = {};
    for(int i = 0; i < m; i++)
    {
        curr[r[i]-1][c[i]-1] = 1;
    }
    for(int time = 0; time < t; time++)
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if(curr[i][j] == 1)
                {
                    int a_int = 0;
                    int temp_i, temp_j;
                    for(int w = 0; w < 4; w++)
                    {
                        if(Is_Grid(i+dx[w],j+dy[w]) && a_int < a[i+dx[w]][j+dy[w]])
                        {
                            temp_i = i+dx[w];
                            temp_j = j+dy[w];
                            a_int = a[i+dx[w]][j+dy[w]];
                        }       
                    }
                    next[temp_i][temp_j]++;
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(next[i][j] > 1)
                {
                    next[i][j] = 0;
                }
                curr[i][j] = next[i][j];
                next[i][j] = 0;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            result += curr[i][j];
        }
    }
    cout << result;
    return 0;
}
