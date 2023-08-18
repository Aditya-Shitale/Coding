/*

 Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).

*/



#include<bits/stdc++.h>
using namespace std;
/*
1.Make Choice diagram for the specific problem
2.Find the base condition for this
3.Follow basic structure of recursive solution
*/
int knapsack(vector<int> val,vector<int>wt,int w,int n){
    //when there is no item left or bag capacity becomes zero return 0;
    if(n==0||w==0){
        return 0;
    }
    //if item weight is less than or equal to bag weight capacity then we have 2 choice either we include it or not include it
    //So we take the choice which will give max profit among both 
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(val,wt,w-wt[n-1],n-1),knapsack(val,wt,w,n-1));
    }
    //else if weight of item is greater than bag weight capacity we will skip that item and move forward
    else{
        return knapsack(val,wt,w,n-1);
    }
}

int main(){
    vector<int>item={60, 100, 120};
    vector<int>wt={10, 20, 30};
    int w=50;
    cout<<knapsack(item,wt,w,wt.size())<<" ans";
    return 0;
}