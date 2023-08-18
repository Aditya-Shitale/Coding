#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a digit from 1 to 12 ";
    cin>>n;
    int i=1;
    int z=9;
    while(i<=n){
        for(int k=0;k<i;k++){
            z=z+1;
            cout<<z<<" ";
        }
        cout<<endl;
        z=z+1;
        i++;
        
    }
    return 0;
}