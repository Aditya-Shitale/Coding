/*
alternative to top down approach memoization
USE OF THIS METHOD: IF THE VALUE IS ALREADY PRESENT IN THE MATRIX IT WILL NOT GO FURTHER IN RECURSION HENCE DECREASES TIME COMPLEXITY
O(n^2)
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> t(102, vector<int>(1001, -1));// ONE MATRIX ADDED TO MEMOIZATION APPROACH

int knapsack(vector<int> &item, vector<int> &wt, int w, int n)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
//ONE CONDITION ADDED TO MEMOIZATION APPROACH
    if (t[n][w] != -1)
    {
        return t[n][w];
    }

    if (wt[n - 1] <= w)
    {
        //INTIALIZATION ADDED FOR MEMOIZATION APPROACH
        return t[n][w] = max(item[n - 1] + knapsack(item, wt, w - wt[n - 1], n - 1), knapsack(item, wt, w, n - 1));
    }
        //INTIALIZATION ADDED FOR MEMOIZATION APPROACH
    return t[n][w]=knapsack(item, wt, w, n - 1);
}

int main()
{
    vector<int> item = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int w = 50;

    cout << knapsack(item, wt, w, wt.size()) << " ans";
    return 0;
}