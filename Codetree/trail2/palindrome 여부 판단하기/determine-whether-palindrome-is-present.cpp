#include <iostream>
#include <string>

using namespace std;

void palin(string &A);

string A;

int main() {
    cin >> A;
    string A_origin = A;
    // Please write your code here.
    palin(A);
    if (A == A_origin)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}

void palin(string &A)
{
    string temp = "";
    for (int i = 1; i <= A.length(); i++)
    {
        temp += A[A.length() - i];
    }
    A = temp;
}