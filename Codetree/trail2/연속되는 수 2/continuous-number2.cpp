#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max_cnt = 1, result = 1;
    for (int i = 1; i < N; i++)
    {
        if(arr[i - 1] == arr[i])
        {
            max_cnt++;
            if(i == N-1) 
            {
                if (result < max_cnt)
                {
                    result = max_cnt;
                }
            }
        }
        else
        {
            if (result < max_cnt)
            {
                result = max_cnt;
            }
            max_cnt = 1;
        }
    }
    cout << result;
    return 0;
}