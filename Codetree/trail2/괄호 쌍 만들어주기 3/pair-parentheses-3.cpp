#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int result = 0;
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = i + 1; j < A.size(); j++)
        {
            if(A[i] == '(' && A[j] == ')')
            {
                result++;
            }
        }
    }

    cout << result;
    return 0;
}