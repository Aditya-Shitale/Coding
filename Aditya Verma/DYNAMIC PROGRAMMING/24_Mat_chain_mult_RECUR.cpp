#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>vec,int i,int j){
    if(i>=j)return 0;

    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int z=solve(vec,i,k);int x=solve(vec,k+1,j);int y=vec[i-1]*vec[k]*vec[j];
        cout<<z<<" "<<x<<" "<<y<<endl;
        int temp=x+y+z;
        ans=min(ans,temp);
    }
    return ans;
}


int main(){
    vector<int>vec={40,20,30,10,30};
    int i=1;int j=vec.size()-1;
    cout<<solve(vec,i,j);
    return 0;
}