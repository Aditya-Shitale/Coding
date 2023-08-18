#include <bits/stdc++.h>
using namespace std;
int solve(string &s, int i, int j, bool istrue)
{
    // IF STRING IS EMPTY return 0 ways
    if (i > j)
        return 0;
    // IF STRING CONTAINS ONLY ONE CHARACTER RETURN THE CHARACTER ITSELF
    if (i == j)
    {
        if (istrue == 1)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }
    int ans = 0;
    // NOW PARTITION THE STRING IN K WE NEED TO TAKE START FROM I+1 AND END ON J-1
    // BECAUSE ON THAT POSITION OPERATORS WILL BE PRESENT AND MOVE THE LOOP ON K=K+2
    for (int k = i + 1; k <= j - 1; k = k + 2)
    {
        // CALCULATE LEFT-FALSE LEFT-TRUE RIGHT-FALSE RIGHT-TRUE
        // BEACAUSE The reason we need to find the number of ways in which False can be the answer is due to XOR and OR operators.
        // Because ( False XOR True ) == ( True XOR False ) == TRUE
        // Because ( False OR True ) == ( True OR False ) == TRUE
        // CALCULATE TEMPRORY ANSWER
        int lt = solve(s, i, k - 1, 1);
        int lf = solve(s, i, k - 1, 0);

        int rt = solve(s, k + 1, j, 1);
        int rf = solve(s, k + 1, j, 0);
        // CALCULATE ANSWER FROM TEMPRORY ANSWER
        if (s[k] == '&')
        {
            if (istrue == 1)
            {
                ans += lt * rt;
            }
            else
            {
                ans += lt * rf + lf * rt + lf * rf;
            }
        }
        else if (s[k] == '|')
        {
            if (istrue == 1)
            {
                ans += lt * rt + lt * rf + lf * rt;
            }
            else
            {
                ans += lf * rf;
            }
        }
        else if (s[k] == '^')
        {
            if (istrue == 1)
            {
                ans += lf * rt + lt * rf;
            }
            else
            {
                ans += lf * rf + lt * rt;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "T|T&F^T";
    int i = 0;
    int j = s.size() - 1;
    cout << solve(s, i, j, 1);
    return 0;
}