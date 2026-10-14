#include <iostream>
bool YunYear (int y);
using namespace std;

int y;

int main() {
    cin >> y;

    // Please write your code here.
    if (YunYear(y))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}

bool YunYear(int y)
{
    if (y%4 != 0) return false;
    if (y%100 == 0 && y%400 != 0) return false;
    return true;
}