//STEP 1:FIND THE RANGE OF POSSIBLE DIFFERENCES 
//STEP 2: DO THE EXACT STEPS OF SUBSET SUM
//STEP 3: CHECK IF THE SUM IS VALID OR NOT BY TRAVERSING THE LAST COLUMN
//STEP 4: THEN MINUS THIS VALID SUMS FROM MAX POSSIBLE RANGE AND COMPARE MINIMUM
//STEP 5: RETURN THE MINIMUM

#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &vec, int n, int sum)
{
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1));
    for (int j = 0; j < sum + 1; j++)
        dp[0][j] = 0;
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (vec[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j - vec[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vector<int> valid;
    for (int i = 0; i < (sum + 1)/2; i++)
    {
        if (dp[n][i] == 1)
        {
            valid.push_back(i);
        }
    }
    int mini = INT_MAX;

    for (int i = 0; i < valid.size(); i++)
    {
        mini = min(sum - 2 * valid[i], mini);
    }
    cout << mini << " This is ans";
    return dp[n][sum];
}

int main()
{
    vector<int> vec = {1, 2, 7};

    int n = vec.size();
    
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += vec[i];

    solve(vec, n, sum);

    return 0;
}