/*
WE HAVE GIVEN A STRING WE NEED TO RETURN LONGEST PALINDROMIC SUBSEQUENCE SIZE

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="agbcba";
    //OUTPUT 5 ===> "abcba"
    //take reverse of string s
    string srev= "abcbga";
    //NOW APPLY LCS THATS IT
    vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1));
    for (int i = 0; i < s.size()+1; i++)dp[i][0]=0;
    for (int i = 0; i < s.size()+1; i++)dp[0][i]=0;

    for(int i=1;i<s.size()+1;i++){
        for(int j=1;j<s.size()+1;j++){
            if(s[i-1]==srev[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<"Size of longest palindromic subsequnce==> "<<dp[s.size()][s.size()]<<endl;
    string str="";
    int ssize=s.size();
    int srevsize=s.size();
    while(ssize>0&&srevsize>0){
        if(s[ssize-1]==srev[srevsize-1]){
            str+=s[ssize-1];
            ssize--;srevsize--;
        }
        else{
            if(dp[ssize-1][srevsize]>dp[ssize][srevsize-1]){
                ssize--;
            }
            else{
               srevsize--;
            }
        }
    }
    cout<<"Palindromic string will be===> "<<str;
    

    return 0;
}