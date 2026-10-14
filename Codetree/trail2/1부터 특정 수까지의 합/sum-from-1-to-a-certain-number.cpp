#include <iostream>

using namespace std;

int div10(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << div10(N);
    return 0;
}

int div10(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    return sum / 10;
}