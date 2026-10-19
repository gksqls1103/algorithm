#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int num[20];
int all_sum;
vector<int> A_1;
int result = INT_MAX;

void Split_A(int index)
{
    if(A_1.size() == n)
    {
        int temp_sum1 = 0;
        for(int i = 0; i < n; i++)
        {
            temp_sum1 += A_1[i];
        }
        int temp_sum2 = all_sum - temp_sum1;
        result = min(result, abs(temp_sum1 - temp_sum2));
        return;
    }

    if(index >= 2*n)
    {return;}

    A_1.push_back(num[index]);
    Split_A(index +1);
    A_1.pop_back();

    Split_A(index+1);

}

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> num[i];
    }

    // Please write your code here.
    for (int i = 0; i < 2 * n; i++) 
    {
        all_sum += num[i];
    }

    Split_A(0);
    cout << result;
    return 0;
}
