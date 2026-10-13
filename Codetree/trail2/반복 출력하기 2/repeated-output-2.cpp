#include <iostream>
using namespace std;

void hello(int N);
int N;


int main() {
    cin >> N;

    // Please write your code here.
    hello(N);

    return 0;
}

void hello(int N)
{
    if (N == 0) return;

    hello(N-1);
    cout << "HelloWorld" << '\n';
}