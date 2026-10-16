#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
class member
{   
    public:
        string name;
        int height;
        int weight;
};

bool cmp_h(member a, member b)
{
    if(a.height < b.height)
    {return true;}
    else
    {return false;}

}

int main() {
    cin >> n;
    member member1[n];
    for (int i = 0; i < n; i++) {
        cin >> member1[i].name;
        cin >> member1[i].height;
        cin >> member1[i].weight;
    }

    // Please write your code here.
    sort (member1, member1+n, cmp_h);

    for (int i = 0; i < n; i++) {
        cout << member1[i].name << ' ' << member1[i].height << ' ' << member1[i].weight << '\n';
    }
    return 0;
}