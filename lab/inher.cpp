#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    
    cout<<"to find area of square enter 1 else 2 for rectangle ";
    cin>>i;
    if(i==1){
        int k;
        cout<<"enter side of a square ";
        cin>>k;
        cout<<"Area of square " <<k*k;
    }
    else if(i==2){
 int k,j;
        cout<<"enter length and bradth of a rectangle ";
        cin>>k>>j;
        cout<<"Area of rectangle " <<k*j;
    }
    else{
        cout<<"not a valid no.";
    }
    return 0;
}