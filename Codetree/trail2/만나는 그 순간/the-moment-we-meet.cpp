#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    int result = -1;
    int A_pos[1000001] = {};
    int B_pos[1000001] = {};
    int A_curr = 0 , B_curr = 0, A_cnt = 0, B_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 'R')
        {
            for (int j = 0; j < t[i]; j++)
            {
                A_curr++;
                A_cnt++;
                A_pos[A_cnt] = A_curr;
            }
        }
        else
        {
            for (int j = 0; j < t[i]; j++)
            {
                A_curr--;
                A_cnt++;
                A_pos[A_cnt] = A_curr;
            }
        }

    }

    for(int i = 0; i < m; i++)
    {
        if (d2[i] == 'R')
        {
            for (int j = 0; j < t2[i]; j++)
            {
                B_curr++;
                B_cnt++;
                B_pos[B_cnt] = B_curr;
            }
        }
        else
        {
            for (int j = 0; j < t2[i]; j++)
            {
                B_curr--;
                B_cnt++;
                B_pos[B_cnt] = B_curr;
            }
        }
    }

    if (A_cnt<=B_cnt)
    {
        for(int i = 0; i < B_cnt - A_cnt; i++)
        {
            A_cnt++;
            A_pos[A_cnt] = A_curr;
        }
    }
    else
    {
        for(int i = 0; i < A_cnt - B_cnt; i++)
        {
            B_cnt++;
            B_pos[B_cnt] = B_curr;
        }
    }

    for(int i = 1; i <= A_cnt; i++)
    {
        if(A_pos[i] == B_pos[i])
        {
            result = i;
            break;
        }
    }
    cout << result;

    return 0;
}