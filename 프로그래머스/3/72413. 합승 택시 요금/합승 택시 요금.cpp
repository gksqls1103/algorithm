#include <string>
#include <vector>

using namespace std;

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int inf = 3000000;
    int temp_sum = inf;
    vector<vector<int>> dist(n+1, vector<int> (n+1, inf));
    for(int self = 1; self <= n; self++) {
        dist[self][self] = 0;
    }
    
    for(vector<int> fare:fares)
    {
        int u = fare[0];
        int v = fare[1];
        int cost = fare[2];
        
        dist[u][v] = cost;
        dist[v][u] = cost;
    }
    
    for (int k = 1; k<n+1; k++)
    {
        for(int i = 1; i<n+1; i++)
        {
            for(int j = 1; j<n+1; j++)
            {
                if (dist[i][k]+dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    
    for(int t = 1; t < n+1; t++)
    {
        if(temp_sum > dist[s][t]+dist[t][a]+dist[t][b])
        {
            temp_sum = dist[s][t]+dist[t][a]+dist[t][b];
        }
    }
    
    int answer = temp_sum;
    return answer;
}