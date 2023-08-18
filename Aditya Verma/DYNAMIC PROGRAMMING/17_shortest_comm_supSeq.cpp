/*
BASICALLY LENGTH OF SHORTEST COMMON SUPERSEQUENCE WILL BE ADDITION OF LENGHT OF BOTH STRINGS AND MINUS WITH LONGESTCOMMON SUBSEQUENCE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="geek";
    string b="eke";
    int as=a.size();int bs=b.size();
    vector<vector<int>>dp(as+1,vector<int>(bs+1));
    for(int i=0;i<as+1;i++)dp[i][0]=0;
    for(int j=0;j<bs+1;j++)dp[0][j]=0;

    for(int i=1;i<as+1;i++){
        for(int j=1;j<bs+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
    }
    cout<<as+bs-dp[as][bs];
    return 0;
}