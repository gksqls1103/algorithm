#include <iostream>
#include <vector>

using namespace std;

int n;
int blocks[100];
int s1, e1;
int s2, e2;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    cin >> s1 >> e1;
    cin >> s2 >> e2;

    // Please write your code here.
    vector<int> blocks_temp;

    for(int i = 1; i <= n; i++)
    {
        if(s1 <= i && i <= e1) continue;
        blocks_temp.push_back(blocks[i-1]);
    }
    n = blocks_temp.size();
    for(int i = 1; i <= n; i++)
    {
        blocks[i-1] = blocks_temp[i-1];
    }
    blocks_temp.clear();

    for(int i = 1; i <= n; i++)
    {
        if(s2 <= i && i <= e2) continue;
        blocks_temp.push_back(blocks[i-1]);
    }
    n = blocks_temp.size();
    cout << n << '\n';
    for(int i = 1; i <= n; i++)
    {
        blocks[i-1] = blocks_temp[i-1];
        cout << blocks[i-1] << '\n';
    }

    
    return 0;
}
