#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>mem(1001,vector<int>(1001,-1));
int solve(vector<int>vec,int i,int j){
    if(i>=j)return 0;
    if(mem[i][j]!=-1){
        return mem[i][j];
    }
    int mini=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=solve(vec,i,k)+solve(vec,k+1,j)+vec[i-1]*vec[k]*vec[j];
        mini=min(temp,mini);
    }
    return mem[i][j]=mini;
}

int main(){
    vector<int>vec={40,20,30,10,30};
    int i=1;int j=vec.size()-1;
    cout<<solve(vec,i,j);
    return 0;
}