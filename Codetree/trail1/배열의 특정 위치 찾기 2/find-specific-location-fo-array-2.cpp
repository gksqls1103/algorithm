#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_int[10];
    int e_sum =0, o_sum =0; 
    for (int i = 0; i < 10; i++)
    {
        cin >> a_int[i];
        if (i%2 == 0)
        {
            e_sum += a_int[i];
        }
        else
        {
            o_sum += a_int[i];
        }
    }
    cout << abs(e_sum-o_sum);

    return 0;
}