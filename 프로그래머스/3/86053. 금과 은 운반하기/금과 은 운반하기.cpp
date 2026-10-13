#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    long long answer = 0;
    long long left = 1, right = 400000000000000;
    
    while(left <= right)
    {
        long long mid = (left + right)/2;
        long long max_g = 0, max_s = 0, max_w = 0;
        for (int i = 0; i < w.size(); i++)
        {
            long long mv_count = mid / (t[i] * 2);
            if( mid % (t[i] * 2) >= t[i]) {mv_count++;}
            
            max_g += min((long long)g[i], (long long)w[i]*mv_count);
            max_s += min((long long)s[i], (long long)w[i]*mv_count);
            max_w += min((long long)g[i]+s[i], (long long)w[i]*mv_count);
        }
        if (a <= max_g && b <= max_s && a+b <= max_w)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        
    }
    return answer;
}
