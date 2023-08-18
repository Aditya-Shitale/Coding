

#include<bits/stdc++.h>
using namespace std;
 
void solve(stack<int> &st,int k){
//base case
    if(k==1){
        st.pop();
        return;
    }
    //hypothesis
    int top=st.top();
    st.pop();
    //induction
    solve(st,k-1);
    st.push(top);
}

 void delMid(stack<int> &st,int size){
    if(st.size()==0)return;
    solve(st,(size/2)+1);

 }

int main(){
          stack<int> st;
    st.push(3);st.push(6);st.push(2);st.push(7);st.push(1);st.push(5);
    cout<<"Stack before sort: 5 1 7 2 6 3"<<endl;
    delMid(st,st.size());
cout<<"Stack after sort:  ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

/********************MY SOLUTION******************/
// #include<bits/stdc++.h>
// using namespace std;
//   void delMid(stack<int> &st,int i,int k){
//     //base Case
//     if(i==k/2){
//         st.pop();
//         return;
//     }
//     //hypothesis
//     int top=st.top();
//     st.pop();
//     //induction
//     delMid(st,i+=1,k);
//     st.push(top);
//   }
// int main(){
//       stack<int> st;
//     st.push(3);st.push(6);st.push(2);st.push(7);st.push(1);st.push(5);
//     cout<<"Stack before sort: 5 1 7 2 6 3"<<endl;
//     delMid(st,0,st.size());
//     cout<<"Stack after sort:";
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }

//     return 0;
// }