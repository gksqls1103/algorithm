#include <iostream>
#include <string>

using namespace std;

class Seceret {
    public:
        string secret_code;
        char meeting_point;
        int time;

        Seceret(string secret_code, char meeting_point, int time)
        {
            this -> secret_code = secret_code;
            this -> meeting_point = meeting_point;
            this -> time = time;
        }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;
    Seceret secret1(secret_code, meeting_point, time);
    cout << "secret code : " << secret1.secret_code << '\n';
    cout << "meeting point : " << secret1.meeting_point << '\n';
    cout << "time : " << secret1.time;
    // Please write your code here.
    

    return 0;
}