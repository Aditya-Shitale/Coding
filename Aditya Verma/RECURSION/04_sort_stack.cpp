#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st,int temp){
    //base case
    if(st.empty()||st.top()>=temp){
        st.push(temp);
        return;
    }
    //hypothesis
    int val=st.top();
    st.pop();

    //induction
    insert(st,temp);
    st.push(val);

}

    void sort(stack<int> &st){
        //base case
        if(st.empty()){
            return;
        }
        //hypotheis
        int temp=st.top();
        st.pop();
        sort(st);

        //induction
       insert(st,temp);

    }

int main(){
    stack<int> st;
    st.push(3);st.push(6);st.push(2);st.push(7);st.push(1);
    cout<<"Stack before sort: 1 7 2 6 3"<<endl;
    sort(st);
    cout<<"Stack after sort:";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


    return 0;
}