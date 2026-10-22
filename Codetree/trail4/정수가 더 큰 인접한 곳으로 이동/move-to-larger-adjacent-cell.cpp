#include <iostream>
#include <vector>

using namespace std;

int n;
int r, c;
int a[101][101];
bool Is_Grid(int x, int y)
{
    if(x <= 0 || x > n || y <= 0 || y > n)
    {return false;}
    return true;
}
int main() {
    cin >> n >> r >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    vector <int> result_vec;
    int check = 1;
    while (check) 
    {
        result_vec.push_back(a[r][c]);
        check = 0;
        for (int i = 0; i < 4; i++)
        {
            if(Is_Grid(r + dx[i],c +dy[i]) && a[r][c] < a[r + dx[i]][c + dy[i]])
            {
                r = r + dx[i];
                c = c + dy[i];
                check = 1;
                break;
            }
        }
    }
    for (int i = 0; i < result_vec.size(); i++)
    {
        cout << result_vec[i] << ' ';
    }

    return 0;
}