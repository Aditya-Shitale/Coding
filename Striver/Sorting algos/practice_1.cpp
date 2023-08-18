//Given an array arr[], the task is to remove at most one element and calculate the maximum length of strictly increasing subarray.
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&vec){
    int n=vec.size();
    vector<int>pre(n,0);
    pre[0]=1;
    vector<int>pos(n,0);
    pos[n-1]=1;

    //traverse left->right and count maximum increasing subarray
    for(int i=1;i<n;i++){
        if (vec[i]>vec[i-1]){
            pre[i]=1+pre[i-1];
    }
    }
    //traverse left->right and count maximum increasing subarray
    for(int i=n-2;i>=0;i--){
        if(vec[i]<vec[i+1]){
            pos[i]=1+pos[i+1];
        }
    }
    int l=1;
    int maxi=1;
    //check maximum length subarray without deleting an element
    for(int i=1;i<n;i++){
        if(vec[i-1]<vec[i]){
            l++;
        }else{
            l=1;
        }
        maxi=max(l,maxi);
    }

    //check max subarray by deleting one element
    for(int i=1;i<n-2;i++){
        if(vec[i-1]<vec[i+1]){
            maxi=max(pre[i-1]+pos[i+1],maxi);
        }
    }
    return maxi;
}

int main(){
    vector<int>vec={1,2,3,6,5};
    cout<<solve(vec);
    return 0;
}