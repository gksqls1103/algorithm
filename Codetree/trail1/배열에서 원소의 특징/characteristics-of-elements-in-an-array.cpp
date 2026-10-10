#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_int[10];
    for (int i = 0; i < 10; i ++)
    {
        cin >> a_int[i];
        if (a_int[i] % 3 == 0)
        {
            cout << a_int[i-1];
            break;
        }
    }
    return 0;
}