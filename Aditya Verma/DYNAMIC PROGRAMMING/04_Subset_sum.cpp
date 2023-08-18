/*
Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 
"  https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article  "
*/

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr,int sum,int size){
    //intialize a matrix of length size+1 and breadth sum+1 that is size vs sum matrix
    vector<vector<int>> dp(size+1,vector<int>(sum+1,-1));
    //if sum is other than zero and we have empty array then there will be no such subset
    for(int j=0;j<sum+1;j++)dp[0][j]=0; 
    //if sum is zero we can always return a empty subset hence 
     for(int i=0;i<size+1;i++)dp[i][0]=1;

     //now for intializing whole matrix
     for(int i=1;i<size+1;i++){
        for(int j=1;j<sum+1;j++){
            //if my element is smaller than equal to sum either we can add it in subset or not  add
            //" dp[i-1][j-arr[i-1]]"==>MEANS WE ADDED IN SUBSET
            //"dp[i-1][j-1]"==>MEANS WE DIDN'T ADDED IN SUBSET AND MOVE FORWARD INTIALIZING WITH PREV DIAGONAL
            if(arr[i-1]<=j){
                dp[i][j]= max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
     }
     return dp[size][sum];
}

int main(){
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 9;
  if (solve(arr,sum,arr.size())==0)cout<<"False";
  else cout<<"True";
    return 0;
}