#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];
class Score {
public:
    string name;
    int korean;
    int english;
    int math;
};

bool cmp(Score a, Score b)
{
    if (a.korean == b.korean)
    {
        if(a.english == b.english)
        {
            return a.math > b.math;
        }
        return a.english > b.english;
    }
    return a.korean > b.korean;
}
int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
    }

    // Please write your code here.
    Score score1[n];
    
    for (int i = 0; i < n; i++) {
        score1[i].name = name[i];
        score1[i].korean = korean[i];
        score1[i].english = english[i];
        score1[i].math = math[i];
    }

    sort(score1, score1 + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << score1[i].name << ' ' << score1[i].korean << ' ' << score1[i].english << ' ' << score1[i].math << '\n';
    }

    return 0;
}
