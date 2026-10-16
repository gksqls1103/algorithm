#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    int result = 0;
    while(a != c || b != d)
    {
        b++;
        if (b == 60)
        {
            a++;
            b=0;
        }
        result++;
    }
    cout << result;

    return 0;
}