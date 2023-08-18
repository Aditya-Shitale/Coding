#include<bits/stdc++.h>
using namespace std;

 bool solve(string a,string b){
    //IF BOTH STRINGS EQUAL THEN RETURN TRUE
    if(a==b)return 1;
    //IF LENGTH OF STRING IS LESS THAN OR EQUAL TO 1 MEANS EMPTY STRING OR LEAF NODE THEN DO NOT SWAP RETURN FALSE
    if(a.length()<=1)return 0;

    int n=a.length();
    //LET STRINGS ARE NOT SCRAMBLED INTIALLY
    bool flag=false;
    //BREAK IN K LOOPS
    for(int i=1;i<=n-1;i++){
         //THERE WILL BE TWO CASES CASE1: NO SWAP WHERE WE COMPARE SUBSTRINGS WITH SAME INDEX
    //CASE2:WE WILL COMPARE SUBSTRINGS WITH OPPOSITE INDEX
    //WE NEED TO TAKE && BECAUSE WE ARE PARTIONONG AND THEN CHECKING   
        if(   (solve(a.substr(0,i),b.substr(0,i))   &&   solve(a.substr(i,n-i),b.substr(i,n-1)))
                ||
              (solve(a.substr(0,i),b.substr(n-i,i))  &&  solve(a.substr(i,n-i),b.substr(0,n-i)))     
        ){
            flag=true;
            break;
        }
    }
    return flag;
 }

int main(){
    string a="great";
    string b="rgeat";
    //IF BOTH STRINGS ARE OF DIFFERENT LENGTH IT IS IMPOSSIBLE TO CREATE BY SWAPPING
    if(a.size()!=b.size())cout<<"Not possible"<<endl;
    //IF STRINGS ARE EMPTY THEN ZERO SWAPS 
    if(a.size()==0)cout<<"Both empty then possible"<<endl;
    cout<<solve(a,b);
    return 0;
}