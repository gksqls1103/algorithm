#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a_char[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a_char[i];
    }
    cout << a_char[2 -1] << ' ' << a_char[5 -1] << ' ' << a_char[8 -1];
    return 0;
}