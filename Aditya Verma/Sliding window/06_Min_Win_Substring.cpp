//we have given a string s and string p we need to find a min length substring in s such that it contains the all characters in the string p

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="totmtaptaat";
    string p="tta";
    unordered_map<char,int>mp;

    for(auto it:p){
        mp[it]++;
    }
    int i=0,j=0;
    int cnt=mp.size();
    while(j<s.size()){
        if(mp[s[j]]>0){
            mp[s[j]]--;
            if(mp[s[j]]==0)cnt--;
        }

    }

    return 0;
}