#include <iostream>

using namespace std;

char binary[9];

int main() {
    cin >> binary;

    // Please write your code here.
    int ten = 0;
    for (int i = 0; i < 8; i++)
    {
        if(binary[i] == '\0') break;
        ten = 2 * ten + (binary[i] - '0');
    }
    cout << ten;

    return 0;
}