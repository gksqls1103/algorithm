#include <iostream>

#define MAX_N 5

using namespace std;

class User {
public:
    char code_name;
    int score;
};

User users[MAX_N];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> users[i].code_name >> users[i].score;
    }

    int low_score = 200, low_i = 0;

    for (int i = 0; i < MAX_N; i++)
    {
        if (low_score > users[i].score)
        {
            low_score = users[i].score;
            low_i = i;
        }
    }
    cout << users[low_i].code_name << ' ' << users[low_i].score;



    // Please write your code here.

    return 0;
}
