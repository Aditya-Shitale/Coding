#include<bits/stdc++.h>
using namespace std;

int main(){
    double k;
    cin>>k;
    double a,b,c,d;
    cin>>a>>b>>c>>d;

if(k>=b&&k<=c)cout<< 1;

    if(k<b&&k>=a){
       double l= ((1/(b-a))*(k-a));
       cout<<setprecision(1)<<l<<endl;
    }
    else if(k>c&&k<=d){
      double data= ((1/(c-d))*(k-d));
      cout<<setprecision(1)<<data;
    }
    return 0;
}