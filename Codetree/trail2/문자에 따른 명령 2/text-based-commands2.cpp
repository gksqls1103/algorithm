#include <iostream>
#include <string>
using namespace std;

string dirs;

int main() {
    cin >> dirs;

    // Please write your code here.
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int cur_dir = 3, cur_x = 0, cur_y = 0;

    for (int i = 0; i < dirs.length(); i++)
    {
        if (dirs[i] == 'L')
        {
            cur_dir += 3;
            cur_dir %= 4; 
        }
        else if(dirs[i] == 'R')
        {
            cur_dir++;
            cur_dir %= 4; 
        }
        else
        {
            cur_x += dx[cur_dir];
            cur_y += dy[cur_dir];
        }
    }
    cout << cur_x << ' ' << cur_y;

    return 0;
}