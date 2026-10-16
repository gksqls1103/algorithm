#include <iostream>
#include <vector>
using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Please write your code here.
    int result = -1;

    vector<int> student_cnt(N+1,K);

    for(int i = 0; i < M; i++)
    {
        student_cnt[student[i]]--;
        if(student_cnt[student[i]] == 0)
        {
            result = student[i];
            break;
        }
    }
    cout << result;

    return 0;
}