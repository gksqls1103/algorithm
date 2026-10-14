#include <iostream>
#include <string>

using namespace std;


string text;
string pattern;
int comp_str()
{
    int t_len = (int)text.length();
    int p_len = (int)pattern.length();

    
    for (int i = 0; i <= t_len - p_len; i++)
    {
        bool is_match = true;

      
        for (int j = 0; j < p_len; j++)
        {
            if (text[i + j] != pattern[j])
            {
                is_match = false; 
                break;
            }
        }

        
        if (is_match)
            return i;
    }

    return -1; 
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << comp_str();

    return 0;
}