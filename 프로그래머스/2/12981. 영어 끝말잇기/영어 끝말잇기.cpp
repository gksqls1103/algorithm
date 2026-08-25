#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0,0};
    int check = 0;
    for (int i = 0; i < (words.size()-1); i++)
    {
        if (words[i].back() != words[i+1].front())
        {
            answer = {(i+1)%n + 1, (i+1)/n + 1};
            break;
        }
        for (int j = i+1; j > 0; j--)
        {
            
            if(words[i+1] == words[j-1])
            {
                answer = {(i+1)%n + 1, (i+1)/n + 1};
                check = 1;
                break;
            }
        }
        if (check ==1)
        { break; }
        
    }
    
    

    return answer;
}