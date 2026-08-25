#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    int max = 0, temp = 0, n_idx = n-1;
    vector<int> numv(n, s/n);
    vector<int> answer;
    if (n>s)
    {
        answer.push_back(-1);
    }
    else
    {
        
        temp = s%n;
        while(temp>0)
        {
            numv[n_idx]++;
            temp--;
            n_idx--;
        }
        answer = numv;
    }
    return answer;
}