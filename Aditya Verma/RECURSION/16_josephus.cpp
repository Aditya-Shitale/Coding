#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> vec,int k,int ind,int &ans){
    if(vec.size()==1){
        // cout<<ans<<" tykymy"<<endl;
        ans=vec[0];
        return;
    }
    ind=(ind+k)%vec.size();
    // cout<<ind<<" ";
    vec.erase(vec.begin()+ind);
    solve(vec,k,ind,ans);
}

int main(){
    int n;
    cout<<"Enter no. of peoples: ";
    cin>>n;
    cout<<endl;
    int k;
    cout<<"Enter No. of gaps: ";
    cin>>k;
    cout<<endl;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(i+1);
    }
    k--;
    int ans=-1;
    solve(vec,k,0,ans);
    cout<<ans<<" ans is this"<<endl;
    return 0;
}