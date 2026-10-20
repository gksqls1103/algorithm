#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int result = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        int temp = 0;
        for(int j = 0; j < n; j++)
        {
            temp += A[j]*abs(i-j);
        }
        result = min(result, temp);
    }

    cout << result;

    return 0;
}