#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int N, M;
int coin[100];
int dp[10005];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    // Please write your code here.
    for(int i = 1; i < 10005; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for(int i = 0; i < M; i++)
    {
        if (dp[i] == INT_MAX) continue;
        for(int j = 0; j < N; j++)
        {
            if(i+coin[j] <= M)
            {
                dp[i + coin[j]] = min(dp[i + coin[j]], dp[i]+1); 
            }
        }
    }

    if(dp[M] == INT_MAX)
    {cout << -1;}
    else
    {cout << dp[M];}
    return 0;
}
