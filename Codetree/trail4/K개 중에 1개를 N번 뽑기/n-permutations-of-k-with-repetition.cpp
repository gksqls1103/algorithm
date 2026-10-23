#include <iostream>
#include <vector>
using namespace std;

int K, N;
vector <int> result;
void Select(int a)
{
    if(result.size() == N)
    {
        for(int i = 0; i < result.size(); i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }

    if(a > K) return;

    for(int i = 1; i <= K; i++)
    {
        result.push_back(i);
        Select(i);
        result.pop_back();
    }

}

int main() {
    cin >> K >> N;

    // Please write your code here.
    Select(1);

    return 0;
}
