#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int curr_x = 0, curr_y = 0;

    for (int i = 0; i < n; i++)
    {
        if(dir[i] == 'E')
        {
            curr_x += dist[i]*dx[0];
            curr_y += dist[i]*dy[0];
        }
        else if(dir[i] == 'S')
        {
            curr_x += dist[i]*dx[1];
            curr_y += dist[i]*dy[1];
        }
        else if(dir[i] == 'W')
        {
            curr_x += dist[i]*dx[2];
            curr_y += dist[i]*dy[2];
        }
        else if(dir[i] == 'N')
        {
            curr_x += dist[i]*dx[3];
            curr_y += dist[i]*dy[3];
        }
    }

    cout << curr_x << ' ' << curr_y;

    return 0;
}