#include<bits/stdc++.h>
using namespace std;

void solve(int n,int s,int d,int h,int &cnt){
    cnt++;
    if(n==1){
        cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    //moving n-1 plates from s to h using d as helper "n-1 plates source se uthake helper pe rakhdo aur destination ko helping use kro"
    solve(n-1,s,h,d,cnt);
    cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
    //moving n-1 plates from h to d using s as helper "n-1 plates ko helper se uthake destination pe rakho ur source ko helping use kro "
    solve(n-1,h,d,s,cnt);
}

int main(){
    int n=4;
    int s=1,d=3,h=2,cnt=0;
    solve(n,s,d,h,cnt);
    cout<<endl;
    cout<<endl;
    
    solve(3,s,d,h,cnt);
    return 0;
}