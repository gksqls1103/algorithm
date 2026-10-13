#include <iostream>

using namespace std;
void rect(int n, int m);

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    rect(n,m);
    return 0;
}

void rect(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << 1;
        }
        cout << '\n';
    }
}