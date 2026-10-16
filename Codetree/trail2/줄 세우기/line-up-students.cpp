#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];

class s_info
{
    public:
    int h;
    int w;
    int num;
};

bool cmp(s_info a, s_info b)
{
    if (a.h == b.h)
    {
        if (a.w == b.w)
        {
            return a.num < b.num;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    // Please write your code here.
    s_info student[N];
    for (int i = 0; i < N; i++)
    {
        student[i].h = h[i];
        student[i].w = w[i];
        student[i].num = i+1;
    }

    sort(student, student + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << student[i].h << ' ';
        cout << student[i].w << ' ';
        cout << student[i].num << '\n';
    }

    return 0;
}
