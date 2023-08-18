/*
BASICALLY UNBOUNDED KNAPSACK IS FOR MULTIPLE OCCURENCES IN 0/1 KNAPSACK IF CHOOSE ITEM OR NOT CHOOSE THE ITEM IS PROCESSED IN NOTH CASE.
BUT IN UNBOUNDED KNAPSACK IF I NOT CHOOSE THE ITEM IT IS PROCESSED AND IF I CHOOSE THE ITEM I HAVE CHOICE TO CHOOSE THAT ITEM AGAIN
TAKE ANALOGY: IF I WANT I LIKE ICECREAM AND SOMEONE ASK FOR MY CHOICE I WILL TAKE IT IF AGAIN SOMEONE ASKS I WILL AGAIN TAKE IT, BUT IF I DONT LIKE ICECRAM THEN IF SOMEONE GIVE ME CHOICE I WILL DENY IT AND HE WILL NEVER GIVE ME THAT CHOICE AGAIN 
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>val,vector<int>weight,int wt,int n){
    vector<vector<int>>dp(n+1,vector<int>(wt+1));
    for(int i=0;i<n+1;i++)dp[i][0]=0;
    for(int j=0;j<wt+1;j++)dp[0][j]=0;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<wt+1;j++){
            if(j>=weight[i-1]){
                dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i][j-weight[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][wt];

}

int main(){

    vector<int> val={1,30};
    vector<int>weight={1,50};
    int wt=100;
   cout<< solve(val,weight,wt,val.size());   
    return 0;
}