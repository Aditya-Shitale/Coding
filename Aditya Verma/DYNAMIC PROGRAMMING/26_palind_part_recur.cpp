#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return 0;
        }
        i++;j--;
    }
    return 1;
}

int solve(string s,int i,int j){
    //if string is empty or have only one character number of partitions will be zero
    if(i>=j)return 0;
    //if string i to j is palndrome itslef then we will return zero partitons because we want minimum partitions
    if(ispalindrome(s,i,j))return 0;
int mini=INT_MAX;
    for(int k=i;k<=j-1;k++){
        //solve left side and right side add a partition that is 1 for temprory answer
        int temp=solve(s,i,k)+solve(s,k+1,j)+1;
        //calculate answer from temprory answer
        mini=min(mini,temp);
    }
    return mini;
}

int main(){
    string s="niteen";
    int i=0;int j=s.size()-1;
    cout<<solve(s,i,j);
    return 0;
}