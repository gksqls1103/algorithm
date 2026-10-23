#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int arr[100000];
int dp[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    dp[0] = arr[0];
    int max_ans = dp[0];

    for (int i = 1; i < n; i++) 
    {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        
        max_ans = max(max_ans, dp[i]);
    }

    cout << max_ans;

    return 0;
}
