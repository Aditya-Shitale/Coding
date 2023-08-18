#include<bits/stdc++.h>
using namespace std;

int main(){
    string x="abcde";
    string y="abfce";
    int xs=x.size();int ys=y.size();

    vector<vector<int>> dp(xs+1,vector<int>(ys+1));
    for(int i=0;i<xs+1;i++)dp[i][0]=0;
    for(int j=0;j<ys+1;j++)dp[0][j]=0;

    for(int i=1;i<xs+1;i++){
        for(int j=1;j<ys+1;j++){
            if(x[i-1]==y[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    int maxi=0;
    for(int i=1;i<xs+1;i++){
        for(int j=1;j<ys+1;j++){
            maxi=max(maxi,dp[i][j]);
        }}
  cout<<maxi;
    return 0;
}