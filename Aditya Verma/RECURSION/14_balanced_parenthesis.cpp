#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op){
    if(open==0&&close==0){
        cout<<op<<endl;
        return;
    }
    if(open!=0){
        string op1=op;
        op1+="(";
        solve(open-1,close,op1);
    }
    if(close>open){
        string op1=op;
        op1+=")";
        solve(open,close-1,op1);
    }
   
}

int main(){
    int n;
    cout<<"Enter the value for balanced paranthesis: ";
    cin>>n;
    solve(n,n,"");
    return 0;
}