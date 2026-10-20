#include <iostream>
#include <utility>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int n, m;
int x[20], y[20];
vector<pair<int,int>> select_p;
int result = INT_MAX;
int dist_u(int x1, int y1, int x2, int y2)
{
    return((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
void Select_M(int index)
{
    if(select_p.size() == m)
    {
        int temp = 0;
        for (int i = 0; i < select_p.size() - 1; i++)
        {
            for (int j = i + 1; j < select_p.size(); j++)
            temp = max(temp, dist_u(select_p[i].first, select_p[i].second, select_p[j].first, select_p[j].second));
        }
        result = min(result, temp);
        return;
    }
    if(index == n) 
    {return;}
    select_p.push_back({x[index], y[index]});
    Select_M(index + 1);
    select_p.pop_back();

    Select_M(index + 1);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    Select_M(0);

    cout << result;

    return 0;
}
