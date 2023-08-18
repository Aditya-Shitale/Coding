#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
    if(ip==""){
        cout<<op<<endl;
        return;
    }
    if(isalpha(ip[0])){
    string op1=op;
    string op2=op;
    op1+=toupper(ip[0]);
    op2+=tolower(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    }
    else{
        string op1=op;
        op1+=ip[0];
        ip.erase(ip.begin()+0);
        solve(ip,op1);
    }
}

int main(){
    string ip;
    cout<<"Enter your letter string: ";
    cin>>ip;
    solve(ip,"");

    return 0;
}