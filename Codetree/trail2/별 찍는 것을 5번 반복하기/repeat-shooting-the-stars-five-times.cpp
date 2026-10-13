#include <iostream>
using namespace std;
void Print10Sstars();

int main() {
    // Please write your code here.
    Print10Sstars();
    Print10Sstars();
    Print10Sstars();
    Print10Sstars();
    Print10Sstars();

    return 0;
}

void Print10Sstars()
{
    for (int i = 0; i < 10; i++)
    {
        cout << '*';
    } 
    cout << '\n';
}