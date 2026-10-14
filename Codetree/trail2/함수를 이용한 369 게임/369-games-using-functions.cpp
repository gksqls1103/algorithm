#include <iostream>
bool Is369(int n);
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    int result = 0;
    // Please write your code here.
    for (int i = a; i <= b; i++)
    {
        if(Is369(i) || i%3 == 0) result++;
    }
    cout << result;

    return 0;
}

bool Is369(int n)
{
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        if (temp == 3 || temp == 6 || temp == 9)
        return true;
    }
    return false;
}