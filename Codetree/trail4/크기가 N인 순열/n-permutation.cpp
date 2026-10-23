#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> result;
vector<int> visited(n+1);

void Select()
{
    if(result.size() == n)
    {
        for(int i = 0; i < result.size(); i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 1)
        {continue;}

        visited[i] = 1;
        result.push_back(i);
        Select();
        result.pop_back();
        visited[i] = 0;
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    Select();

    return 0;
}
