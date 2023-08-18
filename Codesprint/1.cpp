#include<bits/stdc++.h>
using namespace std;

int main(){
   int cnt;
   cin>>cnt;
   while(cnt--){
    int num;
    cin>>num;
    vector<int>vec;
    for (int i = 0; i < num; i++)
    {
        int j;
        cin>>j;
        vec.push_back(j);
    }
    sort(vec.begin(),vec.end());
    int st=0;int en=num-1;
    int ans=0;

    while(st<=en){
        if(vec[st]<vec[en]||st==en)ans++;
        // cout<<vec[st]<<vec[en];
        st++;
        en--;
    }
    cout<<ans;
    
   }
    return 0;
}