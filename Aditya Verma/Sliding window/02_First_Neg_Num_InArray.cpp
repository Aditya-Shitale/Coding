#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={12,-1,-7,8,-15,30,13,28};//given vector
    int win=3;//given window size


    queue<int>q;//we will intialize a queue to store negative numbers appearing in order
    int s=0;int e=0;  //start and end intializer
    while(e<vec.size()){
        //step:1(at every index)
        if(vec[e]<0){
            q.push(vec[e]);}

        //step:2(until reaches given window size)
        if(e-s+1<win){
            e++;
        }
        //step:3(when reached fixed window size)
        else if(e-s+1==win){
            //step:3.1(calculation to be made)
            if(q.empty()){
                cout<<"0"<<" ";
            }
            else{
                cout<<q.front()<<" ";
            }
            //step:3.2(removing element from the start to keep window fix)
            if(vec[s]==q.front())q.pop();
            //step:3.3(sliding window from start and end)
            s++;
            e++;

        }
    }
    return 0;
}