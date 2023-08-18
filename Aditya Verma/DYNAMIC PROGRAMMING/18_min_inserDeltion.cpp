/*
MINIMUM NOUMBER OF INSERTION AND DELETION TO COVERT STRING A TO STRING B
STEP 1: FIND LCS STRING 
STEP 2: CONVERT STRING A TO LCS STRING USING DELETION (length(A)-length(LCS))
STEP 3: CONVERT LCS STRING TO STRING B USING INSERTION(length(B)-length(LCS))
STEP 4: RETURN COUNT
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="heap";
    string b="pea";
    //output 2 deletion 1 insertion we add "P" in start of string a
    //we will delete h and p from string a hence we will get string b
    vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1));
    for(int i=0;i<a.size()+1;i++)dp[i][0]=0;
    for(int j=0;j<b.size()+1;j++)dp[0][j]=0;

    for(int i=1;i<a.size()+1;i++){
        for(int j=1;j<b.size()+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    } 
        cout<<"No. of Deletetion "<<a.size()-dp[a.size()][b.size()]<<endl;
        cout<<"No. of Insertion "<<b.size()-dp[a.size()][b.size()];
    return 0;
}