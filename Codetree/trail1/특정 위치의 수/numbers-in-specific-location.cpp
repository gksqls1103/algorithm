#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num, sum = 0;
    for (int i = 0; i<10; i++)
    {
        cin >> num;
        if (i == 2 || i==4 || i==9)
        {
            sum += num;
        }
    } 
    cout << sum;
    return 0;
}