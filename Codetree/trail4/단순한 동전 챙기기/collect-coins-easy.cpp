#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int N;
char grid[20][20];
struct Point {
    int num;
    int x, y;
};
Point start_p, end_p;

vector<Point> point_all;
vector<Point> selects;
int result = INT_MAX;
int GetDist(Point a, Point b)
{
    return abs(a.x - b.x) + abs(a.y - b.y);
}

void SelectCoins(int idx, int cnt)
{
    if(cnt == 3)
    {
        int temp = GetDist(start_p,selects[0])
        + GetDist(selects[0],selects[1]) 
        + GetDist(selects[1],selects[2])
        + GetDist(selects[2], end_p);
        result = min(result, temp);
        return;
    }

    if(idx == point_all.size()) return;

    selects.push_back(point_all[idx]);
    SelectCoins(idx+1, cnt+1);
    selects.pop_back();

    SelectCoins(idx + 1, cnt);
}
bool Bigger_point (Point a, Point b)
{
    return a.num < b.num;
}
int main() {
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];

    // Please write your code here.

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(grid[i][j] == 'S')
            {
                start_p = {0, i, j};
            }
            else if(grid[i][j] == 'E')
            {
                end_p = {10,i,j};
            }
            else if(grid[i][j] != '.')
            {
                point_all.push_back({grid[i][j] -'0',i,j});
            }
        }
    }

    sort(point_all.begin(), point_all.end(),[](const Point& a, const Point& b) 
    {return a.num < b.num;}
    );
    if (point_all.size() < 3) {
        cout << -1 << "\n";
        return 0;
    }
    
    SelectCoins(0, 0);

    if (result == INT_MAX) cout << -1 << "\n";
    else cout << result << "\n";
    
    return 0;
}
