#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 3;
    int weights[3] = {10, 20, 30};
    int values[3] = {60, 100, 120};
    int capacity = 50;
    int dp[n + 1][capacity + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (weights[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else if (weights[i - 1] <= j)
            {
                int temp1 = values[i - 1] + dp[i - 1][j - weights[i - 1]];
                int temp2 = dp[i - 1][j];
                dp[i][j] = max(temp1, temp2);
            }
        }
    }
    cout << dp[n][capacity] << endl;
}