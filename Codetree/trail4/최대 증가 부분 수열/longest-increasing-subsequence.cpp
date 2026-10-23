#include <iostream>
#include <algorithm>

using namespace std;

int N;
int M[1000];
int result[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    // Please write your code here.
    for(int i = 0; i < 1000; i++)
    {result[i] = 1;}
    for(int i = 0; i < N-1; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(M[i] < M[j])
            {result[j] = max(result[j], result[i] + 1);}
        }
    }

    int result_i = 0;
    for(int i = 0; i < 1000; i++)
    {
        
        result_i = max(result_i, result[i]);
    }
    cout << result_i;

    return 0;
}
