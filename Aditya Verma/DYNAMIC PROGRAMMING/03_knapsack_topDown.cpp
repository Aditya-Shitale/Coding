#include <bits/stdc++.h>
using namespace std;

int knapsack( vector<int> val,vector<int> wt,int w, int n) 
    {
        vector<vector<int>>t (n+1,vector<int>(w+1));
        
        //Initialize matrix(weight vs value)
        for(int i=0; i<w+1; i++) t[0][i] = 0;
        for(int j=0; j<n+1; j++) t[j][0] = 0;
        
        //Choice Diagram to code
        for(int i = 1; i<n+1; i++){
            for(int j=1; j<w+1; j++){
                //1. In case of choice
                if(wt[i-1] <= j){
                    t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
                }
                //2. No choice
                else if(wt[i-1] > j){
                    t[i][j] = 0+t[i-1][j];
                }
            }
        }
        return t[n][w];
    }


int main()
{
    vector<int> item = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int w = 50;
   int n=wt.size();
    cout<< knapsack(item, wt, w, n) ;
    
    return 0;
   
}