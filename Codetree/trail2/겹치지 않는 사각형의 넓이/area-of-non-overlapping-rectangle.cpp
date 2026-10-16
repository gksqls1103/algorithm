#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    int area[2001][2001] = {};
    int result = 0;

    for(int ABM = 0; ABM <= 2; ABM++)
    {
        for(int i = x1[ABM] + 1000; i < x2[ABM] + 1000; i++)
        {
            for(int j = y1[ABM] + 1000; j < y2[ABM] + 1000; j++)
            {
                if (ABM == 2)
                {
                    area[i][j] = 0;
                }
                else
                {
                    area[i][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i <=2000; i++)
    {
        for(int j = 0; j <=2000; j++)
        {
            if(area[i][j] == 1)
            {
                result++;
            }
        }
    }

    cout << result;
    return 0;
}