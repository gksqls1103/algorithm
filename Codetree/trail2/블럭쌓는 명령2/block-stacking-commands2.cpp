#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) 
    {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int cnt[N] = {0,};
    for (int i = 0; i < K; i++) {
        for (int j = A[i]-1; j <= B[i]-1; j++)
        {
            cnt[j]++;
        }
    }
    
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
        }
    }
    cout << max;
    return 0;
}