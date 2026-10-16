#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result = 1;
    while(true)
    {
        if (m1 == m2 && d1 == d2)
        {
            break;
        }
        d1++;
        if(d1 > num_of_days[m1])
        {
            d1 = 1;
            m1++;
        }
        result++;
    }
    cout << result;

    return 0;
}