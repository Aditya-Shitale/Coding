//MINIMUM NUMBER OF DELETION TO MAKE STRING PALINDROMIC
//STEP 1: TAKE OUT LONGEST PALINDROMIC SUBSEQUENCE OF GIVEN STRING
//STEP 2: MINUS ITS SIZE FROM STRING SIZE THAT IS WHAT WE NEED TO DELETE TO MAKE PALINDROME
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="agbcba";
    //TAKE REVERSE OF GIVEN STRING
    string x= "abcbga";
    vector<vector<int>>dp(s.size()+1,vector<int>(x.size()+1));
    for(int i=0;i<s.size()+1;i++)dp[i][0]=0;
    for(int j=0;j<x.size()+1;j++)dp[0][j]=0;

    for(int i=1;i<s.size()+1;i++){
        for (int j= 1; j<x.size()+1 ; j++){
          if(s[i-1]==x[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
          }
          else{
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
        }
    }

    cout<<"Minimum deletion to create palindrome string from given string will be===> "<<s.size()- dp[s.size()][x.size()];
    
    return 0;
}