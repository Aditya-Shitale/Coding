#include<bits/stdc++.h>
using namespace std;
//BYSEEING CODE OF RECURSION WE CONVERTED IN BOTTOM UP APPROACH
int main(){
  string x="abcdgh";
     string y="abedfhr";
     vector<vector<int>>dp(x.size()+1,vector<int>(y.size()+1));
    for(int i=0;i<x.size()+1;i++)dp[i][0]=0;
    for(int j=0;j<y.size()+1;j++)dp[0][j]=0;

    for (int i = 1; i < x.size()+1; i++){
        for(int j=1;j<y.size()+1;j++){
            if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<< dp[x.size()][y.size()];
    

}