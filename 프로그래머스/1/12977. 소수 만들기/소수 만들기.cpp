#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    int temp_sum = 0, f_idx = 0, s_idx = 1, t_idx = 2;
    while(f_idx < (nums.size() -2))
    {
        while(s_idx < (nums.size() -1))
        {
            while(t_idx < nums.size())
            {
                int check = 0;
                temp_sum = nums[f_idx] + nums[s_idx] + nums[t_idx];
                for(int i = 2; i<temp_sum; i++)
                {
                    if(temp_sum%i == 0)
                    {
                        check = 1;
                        break;
                    }
                }
                if(check == 0)
                {
                    answer++;
                }
                t_idx++;
            }
            s_idx++;
            t_idx = s_idx + 1;
        }
        f_idx++;
        s_idx = f_idx + 1;
        t_idx = s_idx + 1;
    }

    return answer;
}