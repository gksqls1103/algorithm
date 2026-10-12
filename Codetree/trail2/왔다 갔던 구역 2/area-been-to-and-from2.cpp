#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    int cnt[3000] = {};
    int current = 1005, output_i = 0;
    for (int i = 0; i < n; i++) 
    {
        if (dir[i] == 'R')
        {
            for (int j = 0; j < x[i]; j++)
            {
                cnt[current]++;
                current++;
            }
        }
        else if (dir[i] == 'L')
        {
            for (int j = 0; j < x[i]; j++)
            {
                current--;
                cnt[current]++;
                
            }
        }
    }

    for (int i = 1; i < 3000; i++)
    {
        if (cnt[i] >= 2)
        {
            output_i++;
        }
    }
    cout << output_i;
    return 0;
}