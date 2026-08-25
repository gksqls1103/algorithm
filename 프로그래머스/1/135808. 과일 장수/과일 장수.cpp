#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int idx = 0;
    sort(score.rbegin(),score.rend());
    while(m <= score.size()-idx)
    {
        answer += score[idx+m-1] * m;
        idx += m;
    }
    return answer;
}