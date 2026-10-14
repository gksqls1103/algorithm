#include <iostream>
bool IsPrime(int n);
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    int sum = 0;
    // Please write your code here.
    for (int i = a; i <= b; i++)
    {
        if (IsPrime(i))
        {
            sum+= i;
        }
    }
    cout << sum;
    return 0;
}

bool IsPrime(int n)
{
    for (int i = 2; i < n-1; i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}