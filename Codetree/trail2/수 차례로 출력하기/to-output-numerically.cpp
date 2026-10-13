#include <iostream>

using namespace std;
void inc_i(int N);
void dec_i(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    inc_i(N);
    cout << '\n';
    dec_i(N);

    return 0;
}

void inc_i(int N)
{
    if (N == 0) return;

    inc_i(N-1);
    cout << N << ' ';
}

void dec_i(int N)
{
    if (N == 0) return;

    cout << N << ' ';
    dec_i(N-1);
    
}