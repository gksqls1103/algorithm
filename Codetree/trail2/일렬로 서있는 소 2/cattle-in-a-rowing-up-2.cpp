#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            for(int w = j+1; w < N; w++)
            {
                if(A[i] <= A[j] && A[j] <= A[w])
                {
                    result++;
                }
            }
        }
    }
    cout << result;
    return 0;
}