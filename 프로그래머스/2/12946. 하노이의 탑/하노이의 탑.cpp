#include <string>
#include <vector>

using namespace std;

void hanoi(int start, int mid, int end, int n, vector<vector<int>>& answer) {
    if (n == 1) { 
        answer.push_back({start, end});
        return; 
    }
    
    hanoi(start, end, mid, n - 1, answer);
    answer.push_back({start, end});
    hanoi(mid, start, end, n - 1, answer);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    hanoi(1, 2, 3, n, answer);
    
    return answer;
}