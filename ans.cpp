#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n; //enter number of tanks
 stack<int> st;
   for(int i=0;i<n;i++)
   {
    //taking input of all tanks and push in stack
        int x;
        cin>>x;
        st.push(x);
        //while stack  size is greater than 1
        while(st.size()>1)
        {
            // take out first two elments in the stack and store it
            int x1=st.top();
            st.pop();
            int x2=st.top();
            st.pop();
            //check if multiplication of two elements is negative or positive and second element is greater than zero then we can compare both numbers absolute value and push the element which is bigger,if multiplication is positive we push both numbers
            if(x1*x2 <0 && x2>0)
            {
                if(abs(x1)>abs(x2))
                {
                    st.push(x1);
                }
                else{
                st.push(x2);
                
                }

            }
            else
            {
                st.push(x2);
                st.push(x1);
                break;
            }
        }
   }

   //printing stack in reverse order
        vector<int> vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        for(int i=vec.size()-1;i>=0;i--){
            cout<<vec[i]<<" ";
        }

        
    return 0;
}