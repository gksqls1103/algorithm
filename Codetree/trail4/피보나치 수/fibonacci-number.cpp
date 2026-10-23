#include <iostream>

using namespace std;
int N;
int pibo_i[46];
int Pibo(int N)
{
    if(pibo_i[N] != 0)
    {
        return pibo_i[N];
    }
    if(N == 1 || N == 2)
    {
        pibo_i[N] = 1;
    }
    else
    {
        pibo_i[N] = Pibo(N-1) + Pibo(N-2);
    }
    return pibo_i[N];
}
int main() {
    cin >> N;

    // Please write your code here.
    cout << Pibo(N);

    return 0;
}
