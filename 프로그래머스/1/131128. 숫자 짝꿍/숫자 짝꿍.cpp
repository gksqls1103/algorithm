#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    vector<int> v1(10);
    vector<int> v2(10);
    for(int i = 0; i<X.size(); i++)
    {
        int temp = X[i] - '0';
        v1[temp]++;
    }
    for(int j = 0; j<Y.size(); j++)
    {
        int temp = Y[j] - '0';
        if (v1[temp]>0)
        {
            v2[temp]++;
            v1[temp]--;
        }
    }
    string answer = "";
    for (int w = 9; w>=0; w--)
    {
        while (v2[w]>0)
        {
            answer += (w+ '0');
            v2[w]--;
        }
    }
    if (answer[0] == '0')
    {
        answer = "0";
    }
    if (answer == "")
    {
        answer = "-1";
    }
    return answer;
}