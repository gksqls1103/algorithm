#include <iostream>
#include <algorithm>
using namespace std;

int n;
int grid[100][100];
int result[100][100];
bool Is_Grid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= n)
    {
        return false;
    }
    return true;
}

int Max_Route(int x, int y)
{
    if(!Is_Grid(x,y))
    {return -1;}
    if(result[x][y] != 0)
    {
        return result[x][y];
    }
    if(x == 0 && y == 0)
    {
        result[x][y] = grid[0][0];  
    }
    else
    {
        result[x][y] = max(Max_Route(x-1, y) + grid[x][y], Max_Route(x, y-1) + grid[x][y]);
    }
    return result[x][y];
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    cout << Max_Route(n-1,n-1);
    return 0;
}
