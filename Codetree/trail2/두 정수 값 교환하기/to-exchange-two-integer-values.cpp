#include <iostream>
void swap(int &n, int &m);
using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    swap(n,m);
    cout << n << ' ' << m;
    return 0;
}
void swap(int &n, int &m)
{
    int temp = n;
    n = m;
    m = temp;
}