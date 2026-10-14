#include <iostream>

using namespace std;
bool even5(int n);
int n;

int main() {
    cin >> n;

    // Please write your code here.
    if (even5(n)) 
    cout << "Yes";
    else 
    cout << "No";
    return 0;
}

bool even5(int n)
{
    if (n % 2 == 0 && (n/10 + n%10) % 5 == 0)
    return true;
    else
    return false;
}