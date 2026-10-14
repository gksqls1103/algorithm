#include <iostream>

using namespace std;
int F_EO(int N);
int N;

int main() {
    cin >> N;

    // Please write your code here.
    cout << F_EO(N);
    return 0;
}

int F_EO(int N)
{
    if(N <= 1)
    {
        return 0;
    }
    
    if (N%2 == 0)
    {
        return 1 + F_EO(N/2);
    }
    else
    {
        return 1 + F_EO(N/3);
    }
}