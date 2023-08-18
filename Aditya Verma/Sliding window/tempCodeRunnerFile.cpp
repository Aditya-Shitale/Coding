#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={2,3,5,2,9,7,1};
    int s=0;
    int e=2;
    int maxi=INT_MIN;
    int sum=2+3+5;
    while(e+1<vec.size()){
        sum=sum-vec[s]+vec[e+1];
        cout<<sum<<" ";
        maxi=max(maxi,sum);
         s++;e++;
       
    }
    cout<<endl;
    cout<<maxi<<" ans";
    return 0;
}