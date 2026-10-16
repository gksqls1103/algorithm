#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    vector<int> twoth;
    while(1)
    {
        if (n<2)
        {
            twoth.push_back(n);
            break;
        }
        twoth.push_back(n%2);
        n /= 2;
    }

    for (int i = 1; i <= twoth.size(); i++)
    {
        cout << twoth[twoth.size() - i];
    }
    return 0;
}