/*
https://www.geeksforgeeks.org/count-of-subsets-with-given-difference/
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> vec,int n,int sum){
    vector<vector<int>>dp(n+1,vector<int>(sum+1));

    for(int j=0;j<sum+1;j++)dp[0][j]=0;
    for(int i=0;i<n+1;i++)dp[i][0]=1;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(vec[i-1]<=j){
                dp[i][j]=dp[i-1][j-vec[i-1]]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main(){
    vector<int> vec={ 1, 2, 3, 1, 2};
    int diff=1;
//TAKE SUM OF ARRAY
int sum=0;
for(int i=0;i<vec.size();i++)sum+=vec[i];
//WE HAVE TWO EQATIONS AS FOLLOWS
// SUBSET_SUM(S1)-SUBSET_SUM(S2)=DIFF
//SUBSET_SUM(S1)+SUBSET_SUM(S2)=SUM(ARRAY)
//ADDING BOTH EQUATION WE GET SUM OF FOLLWOING
int s1=(diff+sum)/2;
//NOW WE ONLY NEED TO FIND COUNT OF SUBSET WHICH HAVE SUM EQUALS S1
cout<<solve(vec,vec.size(),s1);

    return 0;
}