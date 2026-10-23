#include <iostream>
#include <vector>

using namespace std;


int K, N;
int cnt;
vector<int> result;
void Select_N(int a, int cnt)
{
    if(cnt == 3) return;
    if(result.size() == N)
    {
        for(int i = 0; i < result.size(); i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i =1; i <= K; i++)
    {
        int temp = cnt;
        if(!result.empty() && (result.back() == i))
        {
            temp++;
        }
        else
        {
            temp = 1;
        }

        result.push_back(i);
        Select_N(i, temp);
        result.pop_back();
    }
}
int main() {
    cin >> K >> N;

    // Please write your code here.
    Select_N(1, 1);
    return 0;
}
