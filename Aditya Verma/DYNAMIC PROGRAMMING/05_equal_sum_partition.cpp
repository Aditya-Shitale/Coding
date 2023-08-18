/*
Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.
https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
*/

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&vec,int w,int n){
    vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
    
    for(int j=0;j<w+1;j++)dp[0][j]=0;
    for(int i=0;i<n+1;i++)dp[i][0]=1;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(vec[i-1]<=j){
                dp[i][j]=max(dp[i-1][j-vec[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

int main(){
    vector<int> arr = {1, 5, 11, 5};
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
// A COMMON THING THAT IF ADDITION OF NUMBERS IS ODD WE CANT PARTITION THEM AFTER THAT WE NEED TO FIND A SUBSET WHOSE ADDITON IS HALF OF TOTAL ADDITION THAT MEANS SOLVE SUBSET SUM PROBLEM
    if(sum%2!=0){
        cout<<"We cannot Partition this array";
    }
    else{
        if(solve(arr,sum/2,n)==1){
            cout<<"We can partition";
        }
        else{
            cout<<"We cannot partition";
        }
    }
    return 0;
}