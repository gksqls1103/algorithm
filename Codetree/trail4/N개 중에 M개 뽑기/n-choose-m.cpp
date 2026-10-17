#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> ans;

void next_num(int i)
{
    if(i == N+1)
    {
        if(ans.size() == M)
        {
            for(int i = 0; i < M; i++)
            {
                cout << ans[i] << ' ';
            }
            cout << '\n';
        }
        return;
    }
    
    ans.push_back(i);
    next_num(i+1);
    ans.pop_back();
    
    next_num(i+1);
    
}

int main() {
    cin >> N >> M;

    // Please write your code here.
    
    next_num(1);

    return 0;
}
