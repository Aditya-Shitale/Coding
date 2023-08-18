#include<bits/stdc++.h>
using namespace std;

int main(){
    string S="aadnady";
     int i=0;int j=0;
        unordered_map<char,int> mp;
        int maxi=INT_MIN;
        
        while(j<S.size()){
            mp[S[j]]++;
            if(mp[S[j]]>1){
                while(mp[S[j]]>1){
                    mp.erase(S[i]);
                    i++;
                }
            }
            int k=mp.size();
            maxi=max(maxi,k);
            j++;
        }
          int k=mp.size();
            maxi=max(maxi,k);
        cout<<maxi;
    return 0;
}