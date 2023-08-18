/*
MINIMUM NUMBER OF INSERTION TO MAKE STRING PALINDROMIC
STEP 1: DO AS SAME TO NUMBER OF DELETION
STEP 2: WE ARE DELELTING THAT NUMBER OF CHARACTERS BEACUSE THEY WERE NOT CONTRIBUTING IN MAKING STRING PALINDROME
STEP 3: HENCE IN SHORT WE NEED TO ADD SAME NUMBER OF CHARACTERS WHICH WE WANT TO DELETE TO MAKE TO MAKE STRING PALINDROME
STEP 4: #INSERTION FOR PALINDROME ==#DELETION FOR PALINDROME
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aebcbda";
    //to find longest palindromic subseq take reverse of string and find lcs
    string z=s;
    reverse(s.begin(),s.end());

    vector<vector<int>>dp(s.size()+1,vector<int>(z.size()+1));
    for(int i=0;i<s.size()+1;i++)dp[i][0]=0;
    for(int j=0;j<z.size()+1;j++)dp[0][j]=0;

    for(int i=1;i<s.size()+1;i++){
        for(int j=1;j<z.size()+1;j++){
            if(s[i-1]==z[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<"No. of insertion needed to make string palindromic is===>  "<<s.size()-dp[s.size()][z.size()];

    return 0;
}