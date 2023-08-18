#include<bits/stdc++.h>
using namespace std;

void push(int x, int st[],int* top )
{
    *top=*top +1;
    st[*top]=x;
}
void pop(int st[], int* top)
{
    *top= *top-1;
}
int main(){
    int n;
    cin>>n; //enter number of tanks
    int st[100000];
    int top=0;
   for(int i=0;i<n;i++)
   {
    //taking input of all tanks and push in stack
        int x;
        cin>>x;
        push(x,st,&top);
        //while stack  size is greater than 1
        while(top>1)
        {
            // take out first two elments in the stack and store it
            int x1=st[top];
            pop(st,&top);
            int x2=st[top];
            pop(st,&top);
            //check if multiplication of two elements is negative or positive and second element is greater than zero then we can compare both numbers absolute value and push the element which is bigger,if multiplication is positive we push both numbers
            if(x1*x2 <0 && x2>0)
            {
                if(abs(x1)>abs(x2))
                {
                    push(x1,st,&top);
                }
                else{
                push(x2,st,&top);
                
                }

            }
            else
            {
                push(x2,st,&top);
                push(x1,st,&top);
                break;
            }
        }
   }

   //printing stack in reverse order
for(int i=1;i<=top;i++)
{
    cout<<st[i]<<" ";
}
cout<<endl;
        
    return 0;
}