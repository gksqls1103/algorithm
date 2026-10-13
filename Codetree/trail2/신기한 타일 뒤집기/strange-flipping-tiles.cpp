#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.

    char cnt[200005] = {};
    int curr = 100001, black = 0, white = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x[i]; j++)
        {    
            if( dir[i] == 'R')
            {
                cnt[curr] = 'B';
                curr++;
                if (j == (x[i]-1)) curr--;
            }
            else if( dir[i] == 'L')
            {
                cnt[curr] = 'W';
                curr--;
                if (j == (x[i]-1)) curr++;
            }
        }
    }
    
    for (int i = 0; i < 200005; i++)
    {
        if (cnt[i] == 'B') black++;
        else if (cnt[i] == 'W') white++;
    }
    cout << white << ' ' << black;
    return 0;
}