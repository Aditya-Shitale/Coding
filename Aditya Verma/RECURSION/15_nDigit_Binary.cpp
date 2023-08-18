#include<bits/stdc++.h>
using namespace std;

void solve(int n,int z,int o,string op){
    if(n==0){
        cout<<op<<endl;
        return;
    }
        // string op1=op;
        // op1+="1";
        // solve(n-1,z,o+1,op1);
        // if(o>z){
        //     string op1=op;
        //     op1+="0";
        //     solve(n-1,z+1,o,op1);
        // }

    /************MY SOLUTION****************/
    if(z==o){
        string op1=op;
        op1+="1";
        solve(n-1,z,o+1,op1);
    }
    else{
        string op1=op;
        string op2=op;
        op1+="0";
        op2+="1";
        solve(n-1,z+1,o,op1);
        solve(n-1,z,o+1,op2);
    }

}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    solve(n,0,0,"");
    return 0;
}