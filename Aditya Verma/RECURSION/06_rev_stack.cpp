#include<bits/stdc++.h>
using namespace std;

   void solve(stack<int>&st,int n){
    //base Case
    if(st.empty()){
        st.push(n);
        return;
    }
    //hypothesis
    int s=st.top();
    st.pop();
    //induction
    solve(st,n);
    st.push(s);
   }

    void rev(stack<int>&st){
        //base Case
        if(st.size()==0)return;

        //hypothesis
        int top=st.top();
        st.pop();
        rev(st);
        //induction
        solve(st,top);
       

    }

int main(){
     stack<int> st;
    st.push(3);st.push(6);st.push(2);st.push(7);st.push(1);st.push(5);
    cout<<"Stack before sort: 5 1 7 2 6 3"<<endl;
    rev(st);
    cout<<"Stack after sort:  ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}