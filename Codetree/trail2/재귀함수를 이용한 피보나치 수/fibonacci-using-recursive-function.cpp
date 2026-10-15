#include <iostream>

using namespace std;
int Pibo(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << Pibo(N);
    return 0;
}
int Pibo(int N)
{
    if (N == 1)
    return 1;
    if (N == 2)
    return 1;
    return Pibo(N-1) + Pibo(N-2);
}