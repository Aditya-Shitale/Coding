/*
LONGEST COMMON SUBSEQUENCE
memoMEMOIZED SOLUTION
*/

#include<bits/stdc++.h>
using namespace std;

int Lcs(string x,string y,int xs,int ys,vector<vector<int>>dp){
    //Base condition we length of any of string is zero then there will be no existing LCS
    if(xs==0||ys==0){
        return 0;
    }
    //we return saved choice
    if(dp[xs][ys]!=-1){
        return dp[xs][ys];
    }

    //CHOICE DIAGRAM
    //IF ANY TWO CHARACTERS MATCHES THEN ADD 1 TO LCS AND RETURN THE REMAING STRING FOR RECURSION
    if(x[xs-1]==y[ys-1]){
        return dp[xs][ys]=1+Lcs(x,y,xs-1,ys-1,dp);
    }
    //IF TWO CHARACTERS DOES NOT MATCH THEN WE NEED TO TAKE TWO CHOICE LEAVE ONE CHARACTER OF ONE STRING AND TAKE WHOLE OF OTHER AND VICE VERSA
    else{
        return dp[xs][ys]=max(Lcs(x,y,xs-1,ys,dp),Lcs(x,y,xs,ys-1,dp));
    }
}

int main(){
     string x="abcdgh";
     string y="abedfhr";
     vector<vector<int>>dp(x.size()+1,vector<int>(y.size()+1,-1));
     //abdh is longest common substring OUTPUT WILL BE 4
      cout<<Lcs(x,y,x.size(),y.size(),dp);
    return 0;
}