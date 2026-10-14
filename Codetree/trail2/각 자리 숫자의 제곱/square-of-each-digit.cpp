#include <iostream>

using namespace std;
int part_2(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << part_2(N);
    return 0;
}
int part_2(int N)
{
    if (N < 10)
    {
        return N*N;
    }
    return (part_2(N%10) + part_2(N/10));
}