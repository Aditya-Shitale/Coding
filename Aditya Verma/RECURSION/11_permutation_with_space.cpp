#include<bits/stdc++.h>
using namespace std;

void perm(string s,string op){
    if(s==""){
        cout<<op<<endl;
        return;
        }
    string a=op,b=op;
    a+="_";
    a+=s[0];
    b+=s[0];
    s.erase(s.begin()+0);
    perm(s,a);
    perm(s,b);
}

int main(){
    string s,op;
    cout<<"Enter Your String: ";
    cin>>s;
    op.push_back(s[0]);
    s.erase(s.begin()+0);
    perm(s,op);
    return 0;
}