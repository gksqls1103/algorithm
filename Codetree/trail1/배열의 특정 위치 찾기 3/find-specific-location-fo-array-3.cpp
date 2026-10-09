#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int input = 1, i = 0;
    int arr_input[100];
    while(1)
    {
        cin >> arr_input[i];
        if (arr_input[i] == 0) break;
        i++;
    }
    cout << arr_input[i-1] + arr_input[i-2] + arr_input[i-3];
    return 0;
}