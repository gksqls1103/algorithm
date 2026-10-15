#include <iostream>
#include <string>
#include <utility>

using namespace std;


string user2_id;
int user2_level;

int main() {
    // Please write your code here.
    pair<string, int> user1 = {"codetree", 10};
    pair<string, int> user2;
    cin >> user2.first >> user2.second;

    cout << "user " << user1.first << " lv " << user1.second << "\n";
    cout << "user " << user2.first << " lv " << user2.second << "\n";
    return 0;
}