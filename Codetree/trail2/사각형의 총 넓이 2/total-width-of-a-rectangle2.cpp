#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.
    int area[201][201] = {};
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = x1[i] + 100; j < x2[i] + 100; j++)
        {
            for(int w = y1[i]+100; w < y2[i] + 100; w++)
            {
                area[j][w] = 1;
            }
        }
    }

    for (int i = 0; i < 201; i++)
    {
        for (int j = 0; j < 201; j++)
        {
            if(area[i][j] == 1) result++;
        }
    }
    cout << result;

    return 0;
}