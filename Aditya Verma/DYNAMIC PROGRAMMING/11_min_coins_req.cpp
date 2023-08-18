#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,5};
    int sum=11;
    vector<vector<int>>dp(vec.size()+1,vector<int>(sum+1));
    //in these case we are making number of coins vs amount matrix
    //if we dont have any coins and asking for amount greater than 0 then we need infinity coins hence we took INT_MAX-1
    for(int j=0;j<sum+1;j++)dp[0][j]=INT_MAX-1;
    //if we have number of coins greater than 0 and asked for amount 0 then we will return 0
    for(int i=0;i<vec.size()+1;i++)dp[i][0]=0;

    for(int i=1;i<vec.size()+1;i++){
        for(int j=0;j<sum+1;j++){
            if(vec[i-1]<=j){
                //if we need to add coin then +1 thats why we took INT_MAX-1 so that limit not exceeds
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-vec[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[vec.size()][sum];

    return 0;
}