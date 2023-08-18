#include<bits/stdc++.h>
using namespace std;
void print(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter a no. between 1 to 26"<<" ";
    cin>>n;
  vector<int> vec;
  for(int i=0;i<n;i++){
    vec.push_back(i+11);
  }

  int p=0;
  while(p<n){
    print(vec);
    vec.push_back(vec[0]);
    vec=vector<int>(vec.begin()+1,vec.end());
    p++;
  }
   
    
    return 0;
}