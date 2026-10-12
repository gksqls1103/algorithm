#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int cnt[205] = {};
    int max_int = 0;
    for (int i = 0; i < n; i++) 
    {
        x1[i] += 100;
        x2[i] += 100;
        for (int j = x1[i]; j < x2[i]; j++)
        {
            cnt[j]++;
        }    
    }

    for (int i = 0; i <= 200; i++)
    {
        if (max_int < cnt[i])
        {
            max_int = cnt[i];
        }
    }
    cout << max_int;
    return 0;
}