#include <iostream>
void odddiv2(int *arr, int n);
using namespace std;

int n;
int arr[50];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Please write your code here.
    odddiv2(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}

void odddiv2(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        arr[i] /= 2;
    }
}