#include <iostream>

using namespace std;
int min_i(int a, int b, int c);
int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << min_i(a,b,c);
    return 0;
}

int min_i(int a, int b, int c)
{
    int result;
    if (a<b)
    {
        if (a<c) result = a;
        else result = c;
    }
    else
    {
        if (b<c) result = b;
        else result = c;
    }
    return result;
}