/*
FIND A SUBSEQUENCE WHICH IS REPEATED MOST TIMES AND WHICH IS THE LONGEST AS POSSIBLE
characters used not be used again while repeatation

SO BASIC CHANGE IS THAT WE NEED TO TAKE TAKE THE CHARACTERS WHICH ARE REPEATING
 S="aabebcdd"
 Z="aabebcdd"
 THEN LCS WILL BE SAME "aabebcdd"
 BUT WE CANNOT TAKE E AND C BEACAUSE IT IS NOT REPEATING HENCE IT WILL COME TO SAME INDEX WHILE LCS 
 HENCE THERE IS ONLY ONE CONDITION WE WILL INCLUDE IF I!=J THEN WE WILL NOT CONSIDER IT IN LCS
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aabebcdd";
    //oUTPUT 3 ===>abd
    string z=s;
    vector<vector<int>>dp(s.size()+1,vector<int>(z.size()+1));
    for(int i=0;i<s.size()+1;i++)dp[i][0]=0;
    for(int j=0;j<z.size()+1;j++)dp[0][j]=0;

    for(int i=1;i<s.size()+1;i++){
        for(int j=1;j<z.size()+1;j++){
            //CHANGE PART
            if(s[i-1]==z[j-1]&&i!=j){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[s.size()][z.size()];
    return 0;
}