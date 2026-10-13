#include <iostream>

using namespace std;

int n;
int x[1000];
char dir[1000];


int cnt_w[200005] = {}; 
int cnt_b[200005] = {};
char last_color[200005] = {};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    
    int curr = 100000;
    
    for (int i = 0; i < n; i++) 
    {
        if (dir[i] == 'L') 
        {
            for (int j = 0; j < x[i]; j++)
            {
                cnt_w[curr]++;
                last_color[curr] = 'W';
                if (j < x[i] - 1) curr--; 
            }
        }
        else if (dir[i] == 'R') 
        {
            for (int j = 0; j < x[i]; j++)
            {
                cnt_b[curr]++;
                last_color[curr] = 'B';
                if (j < x[i] - 1) curr++; 
            }
        }  
    }

    int white = 0, black = 0, gray = 0;

    for (int i = 0; i < 200005; i++)
    {
        // 1. 흰색 2번 이상 & 검은색 2번 이상 칠해졌으면 무조건 회색
        if (cnt_w[i] >= 2 && cnt_b[i] >= 2)
        {
            gray++;
        }
        // 2. 그 외의 경우 마지막 칠해진 색상으로 결정
        else if (last_color[i] == 'W')
        {
            white++;
        }
        else if (last_color[i] == 'B')
        {
            black++;
        }
    }
    
    // 문제 요구사항에 따라 흰색, 검은색, 회색 순으로 출력
    cout << white << ' ' << black << ' ' << gray << '\n';
    
    return 0;
}