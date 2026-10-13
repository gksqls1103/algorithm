#include <iostream>

using namespace std;
void PrintThings(int N);

int N;

int main() {
    cin >> N;

    // Please write your code here.
    PrintThings(N);

    return 0;
}

void PrintThings(int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << "12345^&*()_" << '\n';
    }
}