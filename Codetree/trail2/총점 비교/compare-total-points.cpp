#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];
class Score
{
    public:
    string name;
    int score1;
    int score2;
    int score3;
};

bool cmp(Score a, Score b)
{
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
    }

    // Please write your code here.
    Score score_all[n];
    for (int i = 0; i < n; i++) {
        score_all[i].name = name[i];
        score_all[i].score1 = score1[i];
        score_all[i].score2 = score2[i];
        score_all[i].score3 = score3[i];
    }

    sort(score_all, score_all + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << score_all[i].name <<' ' << score_all[i].score1 << ' ' << score_all[i].score2 <<' ' << score_all[i].score3 <<'\n';
    }



    return 0;
}