#include <iostream>
#include <algorithm>
using namespace std;

int n, m, result;
int A[20];

void Max_Xor(int idx, int cnt, int curr_xor)
{
    if(cnt == m)
    {
        result = max(result, curr_xor);
        return;
    }
    
    if(idx == n)
    {
        return;
    }

    Max_Xor(idx + 1, cnt, curr_xor);
    
    Max_Xor(idx + 1, cnt + 1, curr_xor ^ A[idx]);

}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    Max_Xor(0,0,0);
    cout << result;


    return 0;
}