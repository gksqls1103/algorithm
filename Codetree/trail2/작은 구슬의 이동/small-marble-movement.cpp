#include <iostream>

using namespace std;

bool is_grid(int x, int y, int n)
{
    if(x > 0 && x <= n && y > 0 && y <= n)
    {return true;}
    else
    {return false;}
}

int dir(char d)
{
    if (d == 'U')
    {
        return 3;
    }
    else if (d == 'D')
    {
        return 1;
    }
    else if (d == 'R')
    {
        return 0;
    }
    else if (d == 'L')
    {
        return 2;
    }
}

int n, t;
int r, c;
char d;

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir_i = dir(d);

    for (int i = 0; i < t; i++)
    {
        if (!is_grid(r + dx[dir_i], c + dy[dir_i], n))
        {
            dir_i = (dir_i + 2) % 4;
        }
        else
        {    
            r += dx[dir_i];
            c += dy[dir_i];
        }
    }
    
    cout << r << ' ' << c;
    return 0;
}