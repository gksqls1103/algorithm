#include <iostream>

using namespace std;
int add_all(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << add_all(N);
    return 0;
}
int add_all(int N)
{
    int sum = 0;
    if (N == 1) 
    {
        return 1;
    }
    return N + add_all(N-1);
}