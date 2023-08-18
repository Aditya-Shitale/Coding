#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={1,2,5};
    int sum=5;
    vector<vector<int>>dp(vec.size()+1,vector<int>(sum+1));
    for(int j=0;j<sum+1;j++)dp[0][j]=0;
    for(int i=0;i<vec.size()+1;i++)dp[i][0]=1;

    for(int i=1;i<vec.size()+1;i++){
        for(int j=0;j<sum+1;j++){
            if(vec[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i][j-vec[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[vec.size()][sum];

    return 0;
}