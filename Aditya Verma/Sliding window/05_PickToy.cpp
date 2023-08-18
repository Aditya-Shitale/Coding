//pick toys : pick only two types of toys as many as you can 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abaccab";
    unordered_map<char,int> mp;
    int i=0,j=0;
  string ans="";
    int maxi=0;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<2)j++;
        else if(mp.size()==2){
            int cnt=0;
            for(auto it:mp){
                cout<<it.first<<" <--"<<it.second<<endl;
                cnt+=it.second;
            }
            cout<<" cut"<<endl;
            if(maxi<cnt){
                maxi=cnt;
            string a(s.begin()+i,s.begin()+j+1);
            cout<<a<<" "<<endl;
            ans=a;
            }
            j++;
        }
        else if(mp.size()>2){
            while(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    cout<<ans<<" ans";
    
    return 0;
}
      