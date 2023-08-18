#include<iostream>
#include <vector>
using namespace std;
 void display(vector<int> & v){
     for (int i=0;i< v.size();i++){
           
           cout<<v[i]<<" ";

     }
     cout<<endl;
 }
int main(){
    vector<int> vec1;
    int element, size;
    cout<<"enter size of candies"<<endl;
    cin>>size;
    for (int i = 0; i < size ; i++)
    {
        cout<<"enter no. of candies each student have "<<endl;
        cin>>element;
        vec1.push_back(element);
    }
     display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,566);
    vec1.insert(iter+1,56);
    display(vec1);

    return 0;
}