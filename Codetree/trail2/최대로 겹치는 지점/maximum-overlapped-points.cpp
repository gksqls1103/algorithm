#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int cnt[103] = {};
    int max_i = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = x1[i]; j <= x2[i]; j++)
        {
            cnt[j]++;
        }    
    }
    for (int i = 0; i < 103; i++)
    {
        if (max_i < cnt[i])
        {
            max_i = cnt[i];
        }
    }
    cout << max_i;
    return 0;
}